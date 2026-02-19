
/*Missing Element in Range*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     vector<int> missinRange(vector<int> &arr, int low, int high)
     {
          // code here
          int n = arr.size();
          sort(arr.begin(), arr.end());
          vector<int> ans;
          vector<bool> flag(high - low + 1, 0);
          for (int i = 0; i < n; i++)
          {
               if (arr[i] >= low && arr[i] <= high)
               {
                    flag[arr[i] - low] = 1;
               }
          }
          for (int i = 0; i < high - low + 1; i++)
          {
               if (flag[i] == 0)
                    ans.push_back(low + i);
          }
          return ans;
     }
};