
// Input: [1,2,3]
//     1
//    / \
//   2   3
// Output: 25
// Explanation:
// The root-to-leaf path 1->2 represents the number 12.
// The root-to-leaf path 1->3 represents the number 13.
// Therefore, sum = 12 + 13 = 25.


// Input: [4,9,0,5,1]
//     4
//    / \
//   9   0
//  / \
// 5   1
// Output: 1026
// Explanation:
// The root-to-leaf path 4->9->5 represents the number 495.
// The root-to-leaf path 4->9->1 represents the number 491.
// The root-to-leaf path 4->0 represents the number 40.
// Therefore, sum = 495 + 491 + 40 = 1026.





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
    
    void rootToLeaf(TreeNode* root,vector<int> &nums,int number){
        
        if(!root){
            return;
        }
        
        if(!root->left && !root->right){
            number = number*10 + root->val;
            nums.push_back(number);
            cout<<number<<'\n';
            return;
        }
        rootToLeaf(root->left,nums,number*10 + root->val);
        rootToLeaf(root->right,nums,number*10 + root->val);
        
    }
    
    
    int sumNumbers(TreeNode* root) {
        
        vector<int> v;
        rootToLeaf(root,v,0);
        return accumulate(v.begin(),v.end(),0);
        
    }
};
