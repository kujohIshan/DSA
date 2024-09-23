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
    vector<int> rightSideView(TreeNode* root) {
        map<int, int> right;
        vector<int> ans;
        queue<pair<TreeNode*, int>> q;
        q.push(make_pair(root,0));
        if(root == NULL){
            return ans;
        }
        while(!q.empty()){
            pair<TreeNode*, int> temp= q.front();
            q.pop();
            TreeNode* Front= temp.first;
            int level= temp.second;

            right[level] = Front->val;

            if(Front->left)
            q.push(make_pair(Front->left, level+1));
            if(Front->right)
            q.push(make_pair(Front->right, level+1));
        }
        for(auto i: right){
            ans.push_back(i.second);
        }
        return ans;
    }
};