#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int firstNonRepeating(int arr[], int n)
     {
          unordered_map<int, int> m;

          for (int i = 0; i < n; i++)
          {
               m[arr[i]]++;
          }
          int ans = 0;
          for (int i = 0; i < n; i++)
          {
               if (m[arr[i]] == 1)

               {
                    ans = arr[i];
                    return ans;
               }
          }
          return ans;
     }
};

// GFG