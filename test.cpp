#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left, *right;
};
 
/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
node* newNode(int data)
{
    node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
} 
void inorder(node* root)
{
    if (root)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void mt(node* root){
while (root )
{
    if(root -> left == NULL){
        // cout<<root->data<<" ";
        root = root->right;
    }
    else{
        node* prede = root->left;
        while(prede->right && prede->right != root ){
            prede = prede->right;
        }
        if(prede -> right == NULL){
            cout<<prede->data <<" ";
            prede -> right = root;
            root = root->left;
        }
        else{
            cout<<prede->data <<" ";
            prede ->right = NULL;
            root = root -> right;
        }
    }
}

}

 
/* Driver program to test above functions*/
int main()
{
    node* root = NULL;
 
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
 
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    root->right->left = newNode(6);
    root->right->right = newNode(7);
 
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
 
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(11);
     mt(root);
 
    cout<<endl;
    inorder(root);
 
    return 0;
}