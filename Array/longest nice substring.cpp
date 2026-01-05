class Solution
{
public:
     string longestNiceSubstring(string s)
     {
          unordered_set<char> ans;
          for (char ch : s)
          {
               if (islower(ch))
                    ans.insert(toupper(ch));
               else
                    ans.insert(tolower(ch));
          }
          for (int i = 0; i < s.size(); i++)
          {
               if (ans.count(s[i]))
               {
                    continue;
               }
               string ans1 = longestNiceSubstring(s.substr(0, i));
               string ans2 = longestNiceSubstring(s.substr(i + 1));
               return ans1.size() >= ans2.size() ? ans1 : ans2;
          }
          return s;
     }
};

//leetcode - 1763