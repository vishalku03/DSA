#include<bits/stdc++.h>

using namespace std;
class Solution
{
public:
     long long maxSubarraySum(int arr[], int n)
     {
          long long prefix = 0, maxi = INT_MIN;
          for (int i = 0; i < n; i++)
          {
               prefix += arr[i];
               maxi = max(prefix, maxi);

               if (prefix < 0)
                    prefix = 0;
          }
          return maxi;
     }
};

// GEEKS FOR GEEKS