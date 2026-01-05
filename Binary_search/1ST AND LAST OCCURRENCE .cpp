#include<bits/stdc++.h>
using namespace  std;
class Solution
{
public:
     vector<int> firstAndLast(vector<int> &arr, int n, int x)
     {
          // Code here
          int mid, s = 0, e = n - 1, ansF = -1;
          while (s <= e)
          {
               mid = (s + e) / 2;
               if (arr[mid] == x)
               {
                    ansF = mid;
                    e = mid - 1;
               }
               else if (arr[mid] < x)
               {
                    s = mid + 1;
               }
               else
               {
                    e = mid - 1;
               }
          }

          s = 0, e = n - 1;
          int ansL = -1;
          while (s <= e)
          {
               mid = (s + e) / 2;

               if (arr[mid] == x)
               {
                    ansL = mid;
                    s = mid + 1;
               }
               else if (arr[mid] < x)
               {
                    s = mid + 1;
               }
               else
               {
                    e = mid - 1;
               }
          }
          vector<int> ans;
          if (ansF == -1 || ansL == -1)
          {
               ans.push_back(-1);
               return ans;
          }
          ans.push_back(ansF);
          ans.push_back(ansL);
          return ans;
     }
};

// GFG
