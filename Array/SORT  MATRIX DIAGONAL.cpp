class Solution
{
public:
     vector<vector<int>> diagonalSort(vector<vector<int>> &mat)
     {
          int m = mat.size();    // rows
          int n = mat[0].size(); // colomns

          unordered_map<int, vector<int>> mp;

          // store diagonal elements
          for (int i = 0; i < m; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    mp[i - j].push_back(mat[i][j]);
               }
          }

          // sort them
          for (auto &it : mp)
          {
               sort(it.second.begin(), it.second.end());
          }

          // now, put them back in sorted fashion
          for (int i = m - 1; i >= 0; i--)
          {
               for (int j = n - 1; j >= 0; j--)
               {
                    mat[i][j] = mp[i - j].back();

                    mp[i - j].pop_back();
               }
          }

          return mat;
     }
};

/* logic create
1. map me dal do
2. phir use sort kar do
3 . ayu use vahi matrix me dal do sort kar ke


leetcode - 1329