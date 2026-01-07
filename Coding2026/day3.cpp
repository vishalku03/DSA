/* Count distinct elements in every window  */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     vector<int> countDistinct(vector<int> &arr, int k)
     {
          int n = arr.size();
          vector<int> ans;
          unordered_map<int, int> mp;

          for (int i = 0; i < k; i++)
          {
               mp[arr[i]]++;
          }

          ans.push_back(mp.size());

          int j = 0;
          for (int i = k; i < n; i++)
          {
               mp[arr[j]]--;

               if (mp[arr[j]] == 0)
                    mp.erase(arr[j]);
               j++;
               mp[arr[i]]++;

               ans.push_back(mp.size());
          }

          return ans;
     }
};