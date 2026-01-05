class Solution
{
public:
     string maximumOddBinaryNumber(string s)
     {
          int n = s.length();
          string ans = string(n, '0');

          int i = 0;
          for (char &ch : s)
          {
               if (ch == '1')
               {
                    if (ans[n - 1] == '1')
                    {
                         ans[i] = '1';
                         i++;
                    }
                    else
                    {
                         ans[n - 1] = '1'; // LSB
                    }
               }
          }
          return ans;
     }
};

// LEETCODE PROBLEM -  2864