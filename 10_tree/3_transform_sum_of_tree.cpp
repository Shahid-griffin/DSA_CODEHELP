#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node *left,*right;

    Node(int data){
        this->data = data;
        left=NULL;
        right = NULL;
    }
};

Node* buildtree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    if( data == -1){
        return NULL;
    }

    Node * root = new Node(data);

    cout<<"enter the data for "<<root->data<<" left "<<endl;
    root->left=buildtree();
    cout<<"enter the data for "<<root->data<<" right "<<endl;
    root->right=buildtree();
    return root;
}

void levelorder(Node* root){
    if( root  == NULL){
        return ;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
 

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        
        if( temp == NULL){
            cout<<endl;
        
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

int sumoftree(Node * root){
    if( root==NULL){
        return 0;
    }

    int temp = root->data;
    int left = sumoftree(root->left);
     // this fun will give me sum of lef t part
    int right = sumoftree(root->right);
     // this fun will give me sum of  right part

    root->data = left + right +temp;
    return root->data;

}
int main(){
    Node * root =NULL;
    root = buildtree();
    levelorder(root);
    sumoftree(root);
    cout<<endl;

    levelorder(root);
}