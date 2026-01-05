#include<bits/stdc++.h>
using namespace std;
class Solution
{
     int mod = 1e9 + 7;

public:
     vector<long long> PascalTriangle(int n)
     {

          if (n == 0)
               return {1};

          vector<long long> prev = PascalTriangle(n - 1);
          vector<long long> curr(n);

          curr[0] = 1;
          curr[n - 1] = 1;

          for (long long i = 1; i < n - 1; i++)
          {
               curr[i] = (prev[i] + prev[i - 1]) % mod;
          }

          return curr;
     }

     vector<long long> nthRowOfPascalTriangle(int n)
     {
          
          return PascalTriangle(n);
     }
};
// GFG