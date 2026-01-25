
/* Number of Valid Parentheses */
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     virtual int fun(int n, int sum)
     {
          if (sum < 0)
               return 0;
          if (n == 0)
          {
               if (sum == 0)
                    return 1;
               return 0;
          }

          return fun(n - 1, sum + 1) + fun(n - 1, sum - 1);
     }

     virtual int findWays(int n)
     {
          return (n & 1) ? 0 : fun(n, 0);
     }
};

/*Minimum Difference Between Highest and Lowest of K Scores*/

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int minimumDifference(vector<int> &nums, int k)
     {
          sort(nums.begin(), nums.end());
          int n = nums.size();
          int length = 1e5;
          for (int i = k - 1; i < n; i++)
          {
               length = min(length, nums[i] - nums[max(0, i - k + 1)]);
          }

          return length;
     }
};
