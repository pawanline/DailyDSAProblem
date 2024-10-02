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
    int goodNodes(TreeNode* root) {
       int goodNodeCount = 0;

       countGoodNodes(root,goodNodeCount,root->val);

       return goodNodeCount;
    }


void countGoodNodes(TreeNode *root, int &goodNodeCount, int maxValueForCurrentPath) {
    if (root == NULL) 
    return;
    if(root->val >= maxValueForCurrentPath) {
        goodNodeCount++;
        maxValueForCurrentPath = root -> val;
    }

    countGoodNodes(root -> left,goodNodeCount,maxValueForCurrentPath);
     countGoodNodes(root -> right,goodNodeCount,maxValueForCurrentPath);

}

};


