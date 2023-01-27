#include <bits/stdc++.h>
#include "tree.cpp"
using namespace std;

int main() {
    int count, item;
    BST myBST;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        cin >> item;
        myBST.insert(item);
    }
    myBST.inOrder();
    cout << endl;
    myBST.preOrder();
    cout << endl;
    myBST.postOrder();
    cout << endl;
    vector<int> levelNodes = myBST.levelOrder();
    for (int level : levelNodes) {
        cout << level << " ";
    }
    cout << endl;

    return 0;
}