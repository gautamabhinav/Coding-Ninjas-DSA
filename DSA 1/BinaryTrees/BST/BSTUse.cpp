#include <iostream>
#include "BST.h"
#include<queue>
#include<bits/stdc++.h>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise() {
    int rootData;
    cout << "Enter rootdata" << endl;
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0) {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter  left Child of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if(leftChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter  right Child of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;
        if(rightChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(BinaryTreeNode<int>* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << ":";
    if (root->left != NULL) { 
        cout << "L" << root->left->data;
    }
    if (root->right != NULL) { 
        cout << "R" << root->right->data;
    }   
    cout << endl;

    printTree(root->left); 
    printTree(root->right);
}  

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData; 
    if (rootData == -1) { 
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>* leftChild = takeInput();
    BinaryTreeNode<int>* rightChild = takeInput();
    root->left = leftChild; 
    root->right = rightChild;
    return root;
}

    int numNodes(BinaryTreeNode<int>* root) {
        if(root == NULL) {
            return 0;
        }
        return 1 + numNodes(root -> left ) + numNodes(root -> right);
    }

void inorder(BinaryTreeNode<int>* root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root -> data << " ";
    inorder(root-> right);
}

int height(BinaryTreeNode<int>* root) {
    if(root == NULL) {
        return 0;
    }
    return 1 + max(height(root -> left) , height(root->right));
}


int diameter(BinaryTreeNode<int>* root) {
    

    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root -> left);
    int option3 = diameter(root->right);
    return max(option1,max(option2,option3));
}


pair<int, int> heightDiameter(BinaryTreeNode<int>* root) {
    // pair class return-type function
    // 
    if (root == NULL) { // Base case
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    // Recursive calls over left and right subtree

    pair<int, int> leftAns = heightDiameter(root->left);
    pair<int,int> rightAns = heightDiameter(root->right);

    // Hypothesis step
    // Left diameter, Left height
    int ld = leftAns.second;
    int lh = leftAns.first;

    // Right diameter, Right height
    int rd = rightAns.second;
    int rh = rightAns.first;

    // Induction step
    int height = 1 + max(lh, rh); // height of current root node
    int diameter = max(lh + rh, max(ld, rd)); // diameter of current root node

    pair<int, int> p;                         // Pair class for current root node
    p.first = height;
    p.second = diameter;
    return p;
}

int maximum(BinaryTreeNode<int>* root) {
    if (root == NULL) { 
        return INT_MIN; // -∞ (negative infinity)
    }
    // Otherwise returning maximum of left/right subtree and root’s data
    return max(root->data, max(maximum(root->left), maximum(root->right)));
}


int minimum(BinaryTreeNode<int>* root) {
    if (root == NULL) { // If root is NULL, then we simply return
        return INT_MAX; // +∞ (positive infinity)
    }
    // Otherwise returning minimum of left/right subtree and root’s data
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}


bool isBST(BinaryTreeNode<int>* root) {
    if (root == NULL) { // Base case
        return true;
    }
    int leftMax = maximum(root->left); // Figuring out left’s maximum
    int rightMin = minimum(root->right); // Figuring out right’s minimum
    bool output = (root->data > leftMax) && (root->data <= rightMin) &&
    isBST(root->left) && isBST(root->right);
    //Checked the conditions discussed above
    return output;
}


class IsBSTReturn { // Class to store data for each node of tree
    public:
        bool isBST;
        int minimum;
        int maximum;
    };

IsBSTReturn isBST2(BinaryTreeNode<int>* root) {
    if (root == NULL) { // Base Case
        IsBSTReturn output; // Object created for class and then values initialized
            output.isBST = true; // Empty tree is a BST
            output.minimum = INT_MAX;
            output.maximum = INT_MIN;
            return output;
    }
    IsBSTReturn leftOutput = isBST2(root->left); 
    IsBSTReturn rightOutput = isBST2(root->right); 

// Small Calculation
// Minimum and maximum values figured out side-by-side preventing extra traversals

    int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));


// Checking out for the subtree if it’s a BST or not


    bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <=
    rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST;

// Assigning values to the output class object

    IsBSTReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;

    return output;

}


bool isBST3(BinaryTreeNode<int>* root, int min = INT_MIN, int max = INT_MAX){
    if (root == NULL) { // Base case: Empty tree
        return true;
    }
    // checking out the special condition first and returning false if not satisfied
    if (root->data < min || root->data > max) {
        return false;
    }
    // Checking out left and right subtrees

    bool isLeftOk = isBST3(root->left, min, root->data - 1);
    bool isRightOk = isBST3(root->right, root->data, max);

    // Returning true if both are BST and false otherwise.
    return isLeftOk && isRightOk;
}

vector<int>*getRootToNodePath(BinaryTreeNode<int>* root, int data) {
    if(root == NULL) {
        return NULL;
    }

    if(root -> data == data) {
        vector<int>* output = new vector<int>();
        output->push_back(root->data);
        return output;
    }

    vector<int>* leftOutput = getRootToNodePath(root->left , data);
    if(leftOutput != NULL) {
        leftOutput->push_back(root->data);
        return leftOutput;
    }

    vector<int>* rightOutput = getRootToNodePath(root->right , data);
    if(rightOutput != NULL) {
        rightOutput->push_back(root->data);
        return rightOutput;
    }
    else{
        return NULL;
    }
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1



int main() {

    
    /*
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
    root->left = node1;
    root->right = node2;

    */

   //BinaryTreeNode<int>* root = takeInput();

   BinaryTreeNode<int>* root = takeInputLevelWise();

   /*
   printTree(root);
   cout << "NUM :" << numNodes(root) << endl;
   inorder(root);
   cout << endl;
   pair<int,int> p = heightDiameter(root);
   cout << "Height: " << p.first << endl;
   cout << "Diameter: " << p.second << endl;

   */
   //cout << isBST(root) << endl;
   //cout << isBST3(root) << endl;

   vector<int>* output = getRootToNodePath(root,8);
   for(int i = 0; i < output->size() ; i++) {
       cout << output->at(i) << endl;
   }
   delete output;
   delete root;
}