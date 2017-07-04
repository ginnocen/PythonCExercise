// C++ program to find minimum depth of a given Binary Tree
#include <iostream>     // std::cout
#include <algorithm>    // std::min
using namespace std;


// a node of a binary tree is a structure that contains the data.
struct Node
{
    int data;
    struct Node* left, *right;
}

// Utility function to create new Node
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data  = data;
    temp->left  = temp->right = NULL;
    return (temp);
}

int main()
{
    // Let us construct the Tree shown in the above figure
    Node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    cout << minDepth(root);
    return 0;
}

