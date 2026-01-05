#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     int bs(vector<int> v, int col)
     {
          int s = 0;
          int e = col - 1;
          while (s <= e)
          {
               int mid = (s + e) / 2;
               if (v[mid] < 0)
                    e = mid - 1;

               else
                    s = mid + 1;
          }

          if (s >= col)

               return 0;

          return col - s;
     }
     int countNegatives(vector<vector<int>> &grid)
     {

          int r = grid.size();
          int c = grid[0].size();
          int i, j;
          int count = 0;
          for (int i = 0; i < r; i++)
          {
               count = count + bs(grid[i], c);
          }
          return count;

          // BRUTE FORCE

          //  int count = 0;
          //  for(int i =0;i<grid.size();i++)
          //  {
          //      for(int j =0;j<grid[i].size();j++)
          //      {
          //          if(grid[i][j] <0)
          //          count++;
          //      }
          //  }

          //  return count;
     }
};

//  leetcode problem  - 1331