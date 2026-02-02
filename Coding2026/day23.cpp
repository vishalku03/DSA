/* Max Circular Subarray Sum */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int maxCircularSum(vector<int> &arr)
     {
          // code here

          int n = arr.size();
          int mini = INT_MAX, minSum = 0;
          int maxi = INT_MIN, maxSum = 0;

          int total = 0;
          for (int i : arr)
          {
               total += i;

               minSum += i;
               maxSum += i;

               mini = min(mini, minSum);
               maxi = max(maxi, maxSum);

               if (minSum > 0)
               {
                    minSum = 0;
               }
               if (maxSum < 0)
               {
                    maxSum = 0;
               }
          }

          if (maxi < 0)
               return maxi;

          return max(maxi, total - mini);
     }
};