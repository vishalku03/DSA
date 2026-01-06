/* 1161. Maximum Level Sum of a Binary Tree */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int maxLevelSum(TreeNode *root)
     {
          int maxSum = INT_MIN;
          int restLevel = 0;
          int curLevel = 1;

          queue<TreeNode *> que;
          que.push(root);

          while (!que.empty())
          {

               int n = que.size();

               int sum = 0;

               while (n--)
               {

                    TreeNode *node = que.front();
                    que.pop();

                    sum += node->val;

                    if (node->left)
                         que.push(node->left);

                    if (node->right)
                         que.push(node->right);
               }

               if (sum > maxSum)
               {
                    maxSum = sum;
                    restLevel = curLevel;
               }
               curLevel++;
          }

          return restLevel;
     }
};