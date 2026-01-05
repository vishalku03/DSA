class Solution
{
public:
     bool checkValidString(string s)
     {
          int n = s.length();
          stack<int> st;

          stack<int> ans;

          for (int i = 0; i < n; i++)
          {
               if (s[i] == '(')
                    st.push(i);

               else if (s[i] == '*')
                    ans.push(i);

               else
               {
                    if (!st.empty())
                         st.pop();

                    else if (!ans.empty())
                         ans.pop();

                    else
                         return false;
               }
          }
          while (!st.empty() && !ans.empty())
          {
               if (st.top() > ans.top())
                    return false;
               st.pop();
               ans.pop();
          }
          return st.empty() ? true : false;
     }
};
// leetcode - 678