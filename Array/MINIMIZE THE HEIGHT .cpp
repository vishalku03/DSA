#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     int getMinDiff(int arr[], int n, int k)
     {
          // code here

          int mini = arr[0];
          int maxi = arr[n - 1];
          int ans = maxi - mini;

          for (int i = 0; i < n; i++)
          {
               maxi = max(arr[n - 1] - k, arr[i - 1] + k);
               mini = min(arr[0] + k, arr[i] - k);

               if (mini < 0)
                    continue;
               if (arr[i] - k < 0)
                    continue;

               ans = min(ans, maxi - mini);
          }
          return ans;
     }
};

//GFG