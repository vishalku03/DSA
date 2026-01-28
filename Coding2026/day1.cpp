/* Max Sum Subarray of size K  */

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxSubarraySum(vector<int> &arr, int k)
     {
          int n = arr.size();
          if (n < k)
               return 0;

          int sum = 0;
          int maxSum = 0;

          for (int i = 0; i < k; i++)
          {
               sum = sum + arr[i];
          }

          maxSum = sum;

          for (int i = k; i < n; i++)
          {
               sum = sum + arr[i] - arr[i - k];
               maxSum = max(sum, maxSum);
          }

          return maxSum;
     }
};