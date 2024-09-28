//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL)
        return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    int findpos(int in[], int item, int n){
        
        for(int i= 0; i<n ;i++){
            if(in[i] == item)
            return i;
        }
        return -1;
    }
    Node* build(int in[], int post[], int &index ,int start ,int end ,int n){
        if(index <0 || start > end){
            return NULL;
        }
        int ele= post[index];
        Node *root =new Node(ele);
        int pos = findpos(in, ele ,n);
        index--;
        // recursive call right
        root->right = build(in,post,index, pos+1 ,end ,n);
        // recursive call for left
        root->left = build(in, post, index, start ,pos-1, n);
        
        return root;
    }
    Node *buildTree(int n, int in[], int post[]) {
        
        int post_index =n-1;
        Node* ans = build(in, post, post_index ,0,n-1,n);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(n, in, post);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends