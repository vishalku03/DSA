
/* Subarrays With At Most K Distinct Integers */

#include<bits/stdc++.h>
using  namespace std;

class Solution
{
public:
     int countAtMostK(vector<int> &arr, int k)
     {
          int n = arr.size();
          int l = 0;
          int ans = 0;

          unordered_map<int, int> mp;

          for (int r = 0; r < n; r++)
          {

               mp[arr[r]]++;

               while (mp.size() > k)
               {
                    mp[arr[l]]--;
                    if (mp[arr[l]] == 0)
                         mp.erase(arr[l]);
                    l++;
               }

               ans += (r - l + 1);
          }

          return ans;
     }
};
