// question to fin r he lowest common ancesr 
/*approch 
1 we go down seahing fo the  p nd q nodes 
2 we will get 2 node left and right 
3 base on the we camse up  wiht 4 possilbe sol 

*/
#include<queue>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node * right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;

    }
};

Node * buildtree(){
    int data ;
    cout<<"enter teh data"<<endl;
    cin>>data;

    if(data ==  -1){
        return NULL;
    }

    Node * root = new Node(data);
    cout<<"enter the data  for "<<root->data<<" left "<<endl;
    root->left=buildtree();
    cout<<"enter the data for "<<root->data<<" right "<<endl;
    root->right = buildtree();

    return root;
}

// main function to find the  lowest common ancestor 

Node* LCA( Node * root ,Node *p , Node *q){
    if( root == NULL){         // to check if given nod is  null
        return NULL;
    }
    if( root->data == p->data){   // to ckec is we fin the p find going down
        return p;
    }
    if(root->data == q->data){   // to cjec if we  find the q goin down 
        return q;
    }

    Node * left = LCA(root->left,p,q);        // rec to go on left side 
    Node * right = LCA(root->right,p,q);    // rec to go on rogh t  side

    if( left == NULL  && right == NULL){              // 4 base conditin base on left right 
        return NULL;
    }else if(left != NULL && right == NULL){
        return left;
    }else if(left == NULL && right != NULL){
        return right;
    }else{
        return root;          // if  both retrn val then this is firts ancester
    }
}
int main(){
    Node *root =NULL;
    root = buildtree();

    Node * p= new Node(8);
    Node * q= new Node(10);
    
    cout<<LCA(root,p,q)->data;

}