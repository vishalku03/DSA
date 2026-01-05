class Solution
{
public:
     char nthCharacter(string s, int r, int n)
     {
          // code here
          int t = 0;
          while (t < r)
          {
               string s1 = "";
               for (int i = 0; i <= (n / 2); i++)
               {
                    if (s[i] == '1')
                    {
                         s1 += "10";
                    }
                    else
                    {
                         s1 += "01";
                    }
               }
               s = s1;
               t++;
          }
          return s[n];
     }
};
// gfg