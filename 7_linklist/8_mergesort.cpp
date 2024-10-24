#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next ;

    Node(){
        data = 0;
        next = NULL;
    }
    Node (int data){
        this->data = data;
        next =NULL;
    }

    ~Node(){

    }
};

void insertathead(Node * &head ,Node * &tail, int data){
    if( head == NULL){
        Node * newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node * temp  = new Node (data);
    temp->next = head ;
    head = temp;
    return ;
}

void print(Node * head){
    Node * temp = head ;
    while(temp ){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node * mid(Node * head ){
    Node * slow = head ;
    Node * fast  = head ->next;

    while(fast &&fast->next){
        slow=slow->next;
        fast= fast->next->next;
    }
    return slow;
}

Node * merge(Node * left, Node * right){
    if( left == 0) return right;
    if(right == 0) return left;
    
    Node * prt = new Node(-1);
    Node * mptr = prt;
    while( left && right){
        if( left -> data <= right->data){
            mptr -> next = left;
            mptr = left;
            left = left ->next;
        }else{
            mptr -> next = right;
            mptr = right;
            right=right->next;
        }
    }

    if( left ){
        mptr->next=left;
    }
    if(right){
        mptr ->next  = right;
    }

    return prt->next;
}
Node *  Mergesort(Node * head){
    if( head == NULL || head ->next == NULL){
        return  head ;
    }


Node * middle  =mid(head);
Node * left  = head ; 
Node * right = middle->next;
middle->next = 0;

//rec call for left an right 

left = Mergesort(left);
right = Mergesort(right);

//sort and merge 
Node * newll= merge(left , right);
return newll;

}
int main(){
    Node* Head = NULL;
    Node * tail = NULL;
    insertathead(Head , tail ,50);
    insertathead(Head , tail ,-56);
    insertathead(Head , tail ,100);
    insertathead(Head , tail ,5);
    insertathead(Head, tail,7);
    print(Head);

    Node * temp  = Mergesort(Head );

    // print(Head);
    cout<<endl;
    print(temp);
}