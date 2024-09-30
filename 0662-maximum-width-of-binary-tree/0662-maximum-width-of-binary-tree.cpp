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
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        unsigned long long int maxWidth = 0;
        queue<pair<TreeNode*, unsigned long long int>> q; // Ensure the queue uses the correct type
        q.push(make_pair(root, 0));

        // Level order traversal
        while (!q.empty()) {
            int size = q.size();
            unsigned long long int min = q.front().second;
            unsigned long long int first, last;
            for (int i = 0; i < size; i++) {
                unsigned long long int index = q.front().second - min; // to avoid overflow
                TreeNode* temp = q.front().first;
                q.pop();
                if (i == 0) first = index;
                if (i == size - 1) last = index;
                
                if (temp->left)
                    q.push(make_pair(temp->left, index * 2 + 1));
                if (temp->right)
                    q.push(make_pair(temp->right, index * 2 + 2));
            }
            // Cast to int if needed, or keep maxWidth as unsigned long long
            maxWidth = max(maxWidth, last - first + 1); // No need to cast if maxWidth is unsigned long long int
        }

        return static_cast<int>(maxWidth); // Cast to int for return if needed
    }
};