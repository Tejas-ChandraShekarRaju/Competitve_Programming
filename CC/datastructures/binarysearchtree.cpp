/*	"severity": 8,
	"message": "no suitable constructor exists to convert from \"BST *\" to \"BST\"",
    
 Pending_Methods 

  BST(minimum)   
  BST(maximum)
  BST(Delete)  
    
    */


#include<iostream>

using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
};

class BST
{
    public:

        node* root;

        BST()
        {
            root = nullptr;
        }

        void create(int d)
        {
            node* n = new node();
            n->data = d;
            n->left = nullptr;
            n->right = nullptr;

                if(root == nullptr) root = n;
            
                else  in_sert(root,n);

        }

        void inorder(node* n)
        {
                if(n == nullptr) return;

                inorder(n->left);

                cout<<n->data<<" ";

                inorder(n->right);

        }

        bool search(node* n,int key)
        {
                if(n == nullptr) return false;

                if(n->data == key) return true;

                else if(key>n->data) search(n->right,key);

                else if(key<n->data) search(n->left,key);    

        }

        node* minimum(node* n)
        {
                if(n->left == nullptr) return n;

                else return minimum(n->left);
        }

        node* maximum(node* n)
        {
            if(n->right == nullptr) return n;

            else return maximum(n->right); 
        }

        void de_lete(node* n,int key)
        {
            //In a binarytree every subtree of a node is already a binary tree

        }
        

    private:   

        void in_sert(node* nd,node* nwd)    //nd->node, nwd->new node
        {
                if(nwd->data < nd->data && nd->left!=nullptr) in_sert(nd->left,nwd);

                else if(nwd->data < nd->data && nd->left == nullptr) nd->left = nwd;
                
                else if(nwd->data > nd->data && nd->right != nullptr) in_sert(nd->right,nwd);

                else nd->right = nwd;            

        }

        

       
};


int main()
{
    
    BST bst;

    bst.create(10);
    bst.create(5);
    bst.create(100);
    bst.create(15);
    

    

    cout<<bst.maximum(bst.root)->data;

    
}

