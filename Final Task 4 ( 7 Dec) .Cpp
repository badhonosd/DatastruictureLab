
#include <iostream>
using namespace std;

// Comment Out: Definition for a binary tree node.
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Comment Out: Function to perform in-order traversal of a binary tree
void inOrderTraversal(TreeNode* root) {
    if (root) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// Comment Out: Function to perform pre-order traversal of a binary tree
void preOrderTraversal(TreeNode* root) {
    if (root) {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Comment out : Function to perform post-order traversal of a binary tree
void postOrderTraversal(TreeNode* root) {
    if (root) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Comment Out: Example of creating a simple binary tree
    TreeNode* root = new TreeNode(9);
    root->left = new TreeNode(10);
    root->right = new TreeNode(11);
    root->left->left = new TreeNode(12);
    root->left->right = new TreeNode(13);

    // Comment Out: Perform different tree traversals
    cout << "In-order traversal: ";   // Co0mmant Out : In order Traversal
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-order traversal: ";  //commant out: Pre Order Traversal
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-order traversal: ";  //commant Out: Post order Traversal
    postOrderTraversal(root);
    cout << endl;

    // Out : Comment Free the allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
