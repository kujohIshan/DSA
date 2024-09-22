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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int, map<int, vector<int>>> nodes;
        queue<pair<TreeNode* ,pair<int ,int>>> q;
        if(root == NULL){
            return ans;
        } 
        q.push(make_pair(root, make_pair(0,0)));
        while(!q.empty()){
            pair<TreeNode*, pair<int, int>> temp = q.front();
            q.pop();
            TreeNode* Front= temp.first;
            int level = temp.second.first;
            int vertical = temp.second.second;
            nodes[vertical][level].push_back(Front->val);
            if(Front->left)
            q.push(make_pair(Front->left, make_pair(level+1, vertical - 1)));
            if(Front->right)
            q.push(make_pair(Front->right, make_pair(level+1, vertical + 1)));
        }
        for(auto i: nodes){
            vector<int>column;
            for(auto j: i.second){
                sort(j.second.begin(), j.second.end());
                column.insert(column.end(),j.second.begin(), j.second.end());
            }
            ans.push_back(column);
        }
        return ans;
    }
};