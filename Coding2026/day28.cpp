
/*Maximum Product Subarray*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int maxProduct(vector<int> &arr)
     {
          // KEDANE!!! for multiplication subarray
          int n = arr.size();

          int mini = arr[0], maxi = arr[0];
          int ans = 0;

          if (arr.size() == 1)
               return arr[0];

          for (int i = 1; i < n; i++)
          {

               if (arr[i] < 0)
                    swap(maxi, mini);

               mini = min(mini * arr[i], arr[i]);
               maxi = max(maxi * arr[i], arr[i]);
               ans = max(ans, maxi);
          }

          return ans;
     }
};

/*110. Balanced Binary Tree*/
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
class Solution
{
public:
     bool isBalanced(TreeNode *root)
     {

          bool result = true;

          solve(root, result);
          return result;
     }

     int solve(TreeNode *root, bool &balanced)
     {
          if (root == NULL || balanced == false)
               return 0;

          int leftSide = solve(root->left, balanced);
          int rightSide = solve(root->right, balanced);

          if (abs(leftSide - rightSide) > 1)
          {
               balanced = false;
          }

          return max(leftSide, rightSide) + 1;
     }
};