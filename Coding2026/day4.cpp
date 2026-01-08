
/* Count Subarray with k odds - > GFG */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int atMost(vector<int> &arr, int k)
     {
          int subArrCnt = 0;
          int oddCount = 0;

          int i = 0;
          for (int j = 0; j < arr.size(); j++)
          {
               oddCount += (arr[j] % 2 == 1) ? 1 : 0;
               while (oddCount > k)
               {
                    oddCount += (arr[i] % 2 == 1) ? -1 : 0;
                    i++;
               }
               subArrCnt += j - i + 1;
          }
          return subArrCnt;
     }
     int countSubarrays(vector<int> &arr, int k)
     {
          return atMost(arr, k) - atMost(arr, k - 1);
     }
};

/*  Max Dot Product of Two Subsequences */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int n, m;
     vector<int> ans1, ans2;
     vector<vector<int>> dp;

     int solve(int i, int j)
     {
          if (i == n || j == m)
               return INT_MIN;

          if (dp[i][j] != INT_MIN)
               return dp[i][j];

          int take = ans1[i] * ans2[j];
          int next = solve(i + 1, j + 1);
          if (next > 0)
               take += next;

          int skip1 = solve(i + 1, j);
          int skip2 = solve(i, j + 1);

          return dp[i][j] = max({take, skip1, skip2});
     }

     int maxDotProduct(vector<int> &nums1, vector<int> &nums2)
     {
          ans1 = nums1;
          ans2 = nums2;
          n = ans1.size();
          m = ans2.size();

          dp.assign(n, vector<int>(m, INT_MIN));
          return solve(0, 0);
     }
};
