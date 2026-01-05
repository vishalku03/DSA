// ** // This i/s the custom function interface.
//  * // You should not implement it, or speculate about its implementation
//  *class CustomFunction
// {
//      *public : * // Returns f(x, y) for any given positive integers x and y.
//                * // Note that f(x, y) is increasing with respect to both x and y.
//                * // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
//                *int
//                f(int x, int y);
//      *
// };
// * /

/* #include<bits/stdc++.h>
using namespace std;
    class Solution
{
public:
     vector<vector<int>> findSolution(CustomFunction &customfunction, int z)
     {

          vector<vector<int>> res;
          for (int x = 1; x <= z; x++)
          {
               int s = 1;
               int e = z;

               while (s <= e)
               {
                    int mid = s + (e - s) / 2;

                    if (customfunction.f(x, mid) == z)
                    {
                         vector<int> t = {x, mid};
                         res.push_back(t);
                         e = mid - 1;
                    }
                    else if (customfunction.f(x, mid) > z)
                    {
                         e = mid - 1;
                    }
                    else
                    {
                         s = mid + 1;
                    }
               }
          }
          return res;
     }
}; */

// LEETCODE PROBLEM - 1237