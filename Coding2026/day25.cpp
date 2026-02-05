/*Maximize Number of 1's*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int maxOnes(vector<int> &arr, int k)
     {
          int n = arr.size();
          int ans = 0;
          int i = 0;
          int j = 0;
          while (j < n)
          {
               if (arr[j++] == 0)
                    k--;

               while (k < 0)
               {
                    if (arr[i++] == 0)
                         k++;
               }

               ans = max(ans, j - i);
          }

          return ans;
     }
};
int main()
{
     Solution sol;
     vector<int> arr = {1, 0, 0, 1, 1, 0, 1};
     int k = 2;
     cout << sol.maxOnes(arr, k) << endl; // Output: 6
     return 0;
}

/*3379. Transformed Array*/

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> constructTransformedArray(vector<int> &nums)
     {
          int n = nums.size();
          vector<int> ans(n);

          for (int i = 0; i < n; i++)
          {
               int TargetIndx = ((i + nums[i]) % n + n) % n;

               ans[i] = nums[TargetIndx];
          }

          return ans;
     }
};