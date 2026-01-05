class Solution
{
public:
     void calculate(vector<vector<char>> &grid, int i, int j)
     {
          if (i < 0 || j < 0 || i > grid.size() - 1 || j > grid[0].size() - 1)
               return; // corner case
          if (grid[i][j] == '1')
          {
               grid[i][j] = '0';
               calculate(grid, i - 1, j); // yha ham 1 ke around check kar rhe hai
               calculate(grid, i, j - 1);
               calculate(grid, i + 1, j);
               calculate(grid, i, j + 1);
          }
          else
               return;
     }
     int numIslands(vector<vector<char>> &grid)
     {
          int ans = 0;
          for (int i = 0; i < grid.size(); i++)
          {
               for (int j = 0; j < grid[0].size(); j++)
               {
                    if (grid[i][j] == '1')
                    {
                         calculate(grid, i, j);
                         ans++;
                    }
               }
          }
          return ans;
     }
};

// leetcode - 200