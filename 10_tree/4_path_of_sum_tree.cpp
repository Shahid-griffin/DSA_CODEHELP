// 113 leetcode approch  in  notebook 

// sol

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
    void helper( TreeNode* root , int targetSum , vector<vector<int>> &ans, vector<int> temp, int cs){
        if( root == NULL){
            return ;
        }

        if( root->left ==NULL && root->right == NULL){
                    cs +=root->val;
             temp.push_back(root->val);
            if ( cs  == targetSum){
                ans.push_back(temp);
            }
        //also pass by ref for temp    
        //backtracting
        // cs-=root->val;
        // temp.pop_back();
            return ;
        }

        cs +=root->val;
        temp.push_back(root->val);

        helper(root->left , targetSum , ans, temp,cs);
        helper(root->right, targetSum , ans, temp,cs);

        //backtracting
        // cs-=root->val;
        // temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <int> temp;
        vector<vector<int>> ans;
        int cs=0;

        helper(root, targetSum , ans, temp,cs);
        return ans;
        
    }
};