class Solution
{
public:
     bool isIsomorphic(string s, string t)
     {
          unordered_map<char, char> mp1, mp2;

          for (int i = 0; i < s.length(); i++)
          {
               //  agar s =0 ho aur s != t - > vaha pe false
               if (mp1[s[i]] && mp1[s[i]] != t[i])
                    return false;

               // agr t =0 ho aur t != s vaha pe false;
               if (mp2[t[i]] && mp2[t[i]] != s[i])
                    return false;

               else
               {
                    mp1[s[i]] = t[i]; // t ko s me
                    mp2[t[i]] = s[i]; // s ko t
               }
          }
          return true;
     }
};
//leetcode - 205