class Solution
{
public:
     int minimumLength(string s)
     {
          int n = s.size() - 1;
          int l = 0;
          int r = n;

          while (l < r && s[l] == s[r])
          {
               char c = s[l];

               while (l <= r && s[l] == c)
               {
                    l++;
               }

               while (r >= l && s[r] == c)
               {
                    r--;
               }
          }

          return r - l + 1;
     }
};

// LEETCODE PROBLEM - 1750