// Function to find square root
// x: element to find square root

#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     long long int floorSqrt(long long int x)
     {
          // Your code goes here
          long long int s = 0, e = x / 2, mid, sqr = 1, ans = 1;
          if (x == 0 || x == 1)
          {
               return x;
          }
          while (s <= e)
          {
               mid = s + (e - s) / 2;
               sqr = mid * mid;
               if (sqr == x)
               {
                    return mid;
               }

               else if (sqr <= x)
               {
                    s = mid + 1;
                    ans = mid;
               }
               else
               {
                    e = mid - 1;
               }
          }
          return ans;
     }
};

// GFG 
// IT IS ALSO A FLOOR SQUARE VALUE 