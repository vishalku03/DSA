#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool check(const vector<int> &v, int x, int d)
     {
          int cnt = 1, curr = 0;
          for (int i = 0; i < v.size(); ++i)
          {
               if (v[i] > x)
                    return 0;
               else if (curr + v[i] <= x)
                    curr += v[i];
               else
                    ++cnt, curr = v[i];
          }
          return cnt <= d;
     }
     int shipWithinDays(vector<int> &weights, int days)
     {
          int lo = 1, hi = INT_MAX, id = -1;
          while (hi >= lo)
          {
               int mid = hi - (hi - lo) / 2;
               if (check(weights, mid, days))
               {
                    hi = mid - 1;
                    id = mid;
               }
               else
                    lo = mid + 1;
          }
          return id;
     }
};

// LEETCODE PROBLEM -1011