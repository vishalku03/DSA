
/* Count Subarray with k odds - > GFG */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int atMost(vector<int> &arr, int k)
     {
          int subArrCnt = 0;
          int oddCount = 0;

          int i = 0;
          for (int j = 0; j < arr.size(); j++)
          {
               oddCount += (arr[j] % 2 == 1) ? 1 : 0;
               while (oddCount > k)
               {
                    oddCount += (arr[i] % 2 == 1) ? -1 : 0;
                    i++;
               }
               subArrCnt += j - i + 1;
          }
          return subArrCnt;
     }
     int countSubarrays(vector<int> &arr, int k)
     {
          return atMost(arr, k) - atMost(arr, k - 1);
     }
};