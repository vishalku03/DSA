/* Balance a Binary Search Tree*/
#include<bits/stdc++.h>
using namespace std;

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
     TreeNode *balanceBST(TreeNode *root)
     {
          vector<int> ans;
          inordered(root, ans);
          return helper(ans, 0, ans.size() - 1);
     }

     void inordered(TreeNode *root, vector<int> &ans)
     {
          if (root == NULL)
               return;
          inordered(root->left, ans);
          ans.push_back(root->val);
          inordered(root->right, ans);
     }

     TreeNode *helper(vector<int> &ans, int s, int e)
     {
          if (s > e)
               return NULL;
          int mid = s + (e - s) / 2;
          TreeNode *root = new TreeNode(ans[mid]);
          root->left = helper(ans, s, mid - 1);
          root->right = helper(ans, mid + 1, e);

          return root;
     }
};

/*Koko Eating Bananas*/

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int kokoEat(vector<int> &arr, int k)
     {
          int low = 1;
          int high = *max_element(arr.begin(), arr.end());
          int answer = high;

          while (low <= high)
          {
               int mid = low + (high - low) / 2;
               long long hours = 0;

               for (int bananas : arr)
               {
                    hours += (bananas + mid - 1) / mid; // ceil division
               }

               if (hours <= k)
               {
                    answer = mid;   // possible answer
                    high = mid - 1; // try smaller speed
               }
               else
               {
                    low = mid + 1; // need higher speed
               }
          }

          return answer;
     }
};
