class Solution
{
public:
     bool isFascinating(int n)
     {
          string s = to_string(n);
          string s1 = to_string(2 * n);
          string s2 = to_string(3 * n);
          string s3 = s + s1 + s2;
          vector<int> vis(10000, 0);
          for (int i = 0; i < s3.size(); i++)
          {
               vis[s3[i] - '0']++;
          }
          if (vis[0])
               return false;
          for (int i = 1; i < 9999; i++)
          {
               if (vis[i] > 1)
                    return false;
          }
          return true;
     }
};

// leetcode - 2798