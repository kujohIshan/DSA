/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findpos(vector<int>& inorder, int item, int n){
        for(int i=0; i<n;i++){
            if(inorder[i] == item)
            return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>&inorder,vector<int>& preorder,int &index, int start, int end,int n ){
        if(index >=n || start > end){
            return NULL;
        }
        int ele = preorder[index];
        TreeNode* root = new TreeNode(ele);
        int pos =findpos(inorder,ele,n );
        index++;
        // recursive calls 
        root->left = build(inorder ,preorder ,index , start , pos-1, n);
        root->right = build(inorder , preorder , index , pos+1, end, n);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre_index = 0;
        int size= inorder.size();
        TreeNode* ans= build(inorder, preorder ,pre_index , 0, size-1, size);
        return ans;
    }
};