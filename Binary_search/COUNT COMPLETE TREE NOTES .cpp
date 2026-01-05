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
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int countNodes(TreeNode* root)
     {
          if (root == NULL)
               return 0;
          int leftHeight = findHeightLeft(root);
          int rightHeight = findHeightRight(root);

          if (leftHeight == rightHeight)
               return (1 << rightHeight) - 1;

          else
               return 1 + countNodes(root->left) + countNodes(root->right);
     }

     int findHeightLeft(TreeNode *root)
     {
          int height = 0;
          while (root)
          {
               height++;
               root = root->left;
          }
          return height;
     }

     int findHeightRight(TreeNode *root)
     {
          int height = 0;
          while (root)
          {
               height++;
               root = root->right;
          }
          return height;
     }
};

/*


  int countNotes(TreeNode* root)
  {
      if(!root)
      return 0;
      return 1+countNodes(root->left)+countNodes(root->right);
  }
*/

// LEETCODE PROBLEM - 222