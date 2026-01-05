
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int transitionPoint(int arr[], int n)
     {
          int s = 0;
          int e = n - 1;
          while (s < e)
          {
               int mid = (s + e) / 2;
               if (arr[mid] == 0)
               {
                    s = mid + 1;
               }
               else
               {
                    e = mid;
               }
          }
          if (arr[s] == 0)
               return -1;
          return s;
     }
};
