class Solution
{
public:
     int operate(int a, int b, string str)
     {
          if (str == "+")
               return a + b;

          if (str == "-")
               return a - b;

          if (str == "/")
               return a / b;

          if (str == "*")
               return long(a) * long(b);

          return -1;
     }

     int evalRPN(vector<string> &tokens)
     {

          stack<int> st;

          for (string &str : tokens)
          {
               if (str == "+" || str == "-" || str == "*" || str == "/")
               {
                    int b = st.top();
                    st.pop();

                    int a = st.top();
                    st.pop();

                    int ans = operate(a, b, str);

                    st.push(ans);
               }
               else
               {
                    st.push(stoi(str));
               }
          }
          return st.top();
     }
};

// LEETCODE PROBLEM - 150