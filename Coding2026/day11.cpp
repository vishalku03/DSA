/* Minimum Number of Workers */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int minMen(vector<int> &arr)
     {
          int n = arr.size(), end = 0, ans = 0, j = 0;
          vector<pair<int, int>> vec;

          for (int i = 0; i < n; i++)
               if (arr[i] != -1)
                    vec.push_back({max(0, i - arr[i]), min(n - 1, i + arr[i])});

          sort(vec.begin(), vec.end());

          while (end < n)
          {
               int temp = -1;

               while (j < vec.size() && vec[j].first <= end)
               {
                    temp = max(temp, vec[j].second);
                    j++;
               }

               if (temp < end)
                    return -1;

               ans++;
               end = temp + 1;
          }
          return ans;
     }
};
