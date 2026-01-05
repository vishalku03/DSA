#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     // leetcode -  1678 question number
        // this is alo a replacement of substring in string 



     // BRUTE FORCE TECHNIQUE
     //     string interpret(string command) {

     //         string ans = "";

     //         for(int i =0;i<command.size();i++)
     //         {
     //             if(command[i]=='G')
     //               ans = ans+command[i];
     //               if(command[i]=='(' && command[i+1]==')')
     //                ans = ans +'o';
     //                if(command[i]=='(' && command[i+1]=='a')
     //                 ans = ans+"al";
     //         }
     //         return ans;
     //     }
     // };

     string interpret(string command)
     {
          string s;
          for (int i = 1; i <= command.size(); i++)
          {
               if (command[i - 1] == '(' && command[i] == ')')
               {
                    s.push_back('o');
                    i++;
               }
               if (command[i - 1] != '(' && command[i - 1] != ')')
                    s.push_back(command[i - 1]);
          }
          return s;
     }
};