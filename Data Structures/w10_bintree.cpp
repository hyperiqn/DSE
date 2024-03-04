#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node*buildTree(Node*root){
    int data;
    cout<<"Enter data: "<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root =  new Node(data);
    cout<<"For left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"For right of"<< data << endl;
    root->right=buildTree(root->right);
    return root;
}
void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL)
        return;
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
int leaf(Node* root){
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 1;
    return (leaf(root->left)+leaf(root->right));
}
int main(){
    Node*root=NULL;
    root=buildTree(root);
    cout<<"\nInorder Traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"\nPreorder Traversal: ";
    preorder(root);
    cout<<"\nPostorder Traversal: ";
    postorder(root);
    cout<<"\nNo. of leaf nodes: "<<leaf(root);
    return 0;
}
