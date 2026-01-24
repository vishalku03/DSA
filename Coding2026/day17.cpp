
/*Josephus problem*/
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int josephus(int n, int k)
     {
          int ans = 0;
          for (int i = 1; i <= n; i++)
          {
               ans = (ans + k) % i;
          }

          return ans + 1; // Here i am making 1 based
     }
};