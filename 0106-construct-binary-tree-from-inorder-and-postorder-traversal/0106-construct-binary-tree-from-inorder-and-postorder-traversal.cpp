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
    int findpos(vector<int>& inorder , int ele,int n){
        for(int i= 0; i<n;i++){
            if(inorder[i]== ele)
            return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int &index, int start, int end ,int n){
        if(index <0 || start> end){
            return NULL;
        }
        int ele = postorder[index];
        TreeNode* root = new TreeNode(ele);
        int pos = findpos(inorder,ele,n);
        index--;
        // right recursion call
        root->right= build(inorder, postorder, index, pos+1, end, n);
        // left recursion call
        root->left= build(inorder, postorder, index,start,pos-1,n);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size =inorder.size();
        int post_index =size-1;
        TreeNode* ans = build(inorder, postorder,post_index,0,size-1,size);
        return ans;
    }
};