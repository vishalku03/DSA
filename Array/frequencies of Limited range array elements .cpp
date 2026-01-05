
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
      
     void frequencyCount(vector<int> &arr, int N, int P)
     {

          vector<int> a(P + 1, 0);
          for (int i = 0; i < N; i++)
          {
               a[arr[i]]++;
          }

          for (int i = 0; i < N; i++)
          {
               if (i + 1 <= P)
               {
                    arr[i] = a[i + 1];
               }
               else
               {
                    arr[i] = 0;
               }
          }
     }
};

