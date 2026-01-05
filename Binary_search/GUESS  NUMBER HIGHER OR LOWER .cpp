#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int guessNumber(int n)
     {

          // apply binary search

          int low = 1;

          int high = n;

          while (low <= high)
          {
               int mid = low + (high - low) / 2;

               int mid_val = guess(mid);

               if (mid_val == 0)
               {
                    return mid;
               }
               else if (mid_val == -1)
               {
                    high = mid - 1;
               }
               else
               {
                    low = mid + 1;
               }
          }

          return 0;
     }
};

//LEETCODE PROBLEM - 374