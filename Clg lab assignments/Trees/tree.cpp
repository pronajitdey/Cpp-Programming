#include <bits/stdc++.h>
using namespace std;

class TreeNode {
  public:
    TreeNode *lchild;
    int data;
    TreeNode *rchild;

    TreeNode(int data) {
        this -> data = data;
        lchild = NULL;
        rchild = NULL;
    }
};

class BST {
    TreeNode *root;
    TreeNode* insert(TreeNode *node, int item);
    void inOrder(TreeNode *root);
    void preOrder(TreeNode *root);
    void postOrder(TreeNode *root);
    vector<int> levelOrder(TreeNode *root);

  public:
    BST() {
        root = NULL;
    }

    void insert(int item) {root = insert(root, item);}
    void inOrder() {inOrder(root);}
    void preOrder() {preOrder(root);}
    void postOrder() {postOrder(root);}
    vector<int> levelOrder() {return levelOrder(root);}
};

TreeNode* BST::insert(TreeNode *node, int item) {
    if (node == NULL) {
        node = new TreeNode(item);
    } else {
        if (item < node -> data) {
            node -> lchild = insert(node -> lchild, item);
        } else if (item > node -> data) {
            node -> rchild = insert(node -> rchild, item);
        } else {
            cout << "Duplicate";
        }
    }
    return node;
}

void BST::inOrder(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    inOrder(root -> lchild);
    cout << root -> data << " ";
    inOrder(root -> rchild);
}

void BST::preOrder(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    cout << root -> data << " ";
    preOrder(root -> lchild);
    preOrder(root -> rchild);
}

void BST::postOrder(TreeNode *root) {
    if (root == NULL) {
        return;
    }
    postOrder(root -> lchild);
    postOrder(root -> rchild);
    cout << root -> data << " ";
}

vector<int> BST::levelOrder(TreeNode *root) {
    vector<int> ans;
    queue<TreeNode*> q;
    if (root == NULL) {
        return ans;
    }
    q.push(root);
    while (!q.empty()) {
        TreeNode *temp = q.front();
        q.pop();
        if (temp -> lchild != NULL) q.push(temp -> lchild);
        if (temp -> rchild != NULL) q.push(temp -> rchild);
        ans.push_back(temp -> data);
    }
    return ans;
}