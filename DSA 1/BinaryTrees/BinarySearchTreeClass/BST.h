#include "BTree.h"
using namespace std;
class BST {
    BinaryTreeNode<int>* root;

    public:

    BST() {
        root = NULL;
    }

    ~BST() {
        delete root;
    }

    private:
    BinaryTreeNode<int>* deleteData(int data, BinaryTreeNode<int>* node) {
        if(node == NULL) {
            return NULL;
        }

        if(data > node-> data) {
            node -> right  = deleteData(data , node -> right);
            return node;
        }
        else if(data < node-> data) {
            node -> left = deleteData(data, node -> left);
            return node;
        }else {
            if (node->left == NULL && node->right == NULL) { // Leaf node
            delete node;
            return NULL;
            } else if (node->left == NULL) { // node having only left child
                BinaryTreeNode<int>* temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
            } else if (node->right == NULL) { // node having only right child
                BinaryTreeNode<int>* temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            } else { // node having both the childs
                BinaryTreeNode<int>* minNode = node->right;
                while (minNode->left != NULL) { // replacing node with
                    minNode = minNode->left; // right subtree’s min
                }
                int rightMin = minNode->data;
                node->data = rightMin;
                // now simply deleting that replaced node using recursion
                node->right = deleteData(rightMin, node->right);
                return node;
            }
        }
    }

    void print(BinaryTreeNode<int>* Node){
        if(Node==NULL){
            return;
        }
        cout<<Node->data<<":";
        if(Node->left!=NULL){
            cout<<"L:"<<Node->left->data<<",";//
        }
        if(Node->right!=NULL){
            cout<<"R:"<<Node->right->data;//
        }
        cout<<endl;
        print(Node->left);
        print(Node->right);
    }

    public:
    void deleteData(int data) {
        root = deleteData(data, root);
    }

    void printTree() {
        printTree() {
            printTree(root);
        }
    }

    private:
    BinaryTreeNode<int>* insert(int data , BinaryTreeNode<int>* node) {
        if(node == NULL) {
            BinaryTreeNode<int>* newNode =new  BinaryTreeNode<int>(data);
            return newNode;
        }

        if(data < node-> data) {
            node-> left = insert(data , node -> left);
        }else {
            node-> right = insert(data, node -> right);
        }
        return node;
    }


    public:
    void insert(int data) {
        this -> root = insert(data , this->root);
    }
    private:
        bool hasData(int data , BinaryTreeNode<int>* node) {
            if(node == NULL) {
                return false;
            }

            if(root -> data == data) {
                return true;
            } else if (data < node -> data) {
                return hasData(data , node -> left);
            }else{
                return hasData(data , node -> right);
            }
        }

    public:
    bool hasData(int data) {
        return hasData(data , root);
    }
};