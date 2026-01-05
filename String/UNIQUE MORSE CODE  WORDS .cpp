#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int uniqueMorseRepresentations(vector<string> &words)
     {
          vector<string> v = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

          set<string> s;
          for (auto word : words)
          {
               string morseCode;
               for (char c : word)
               {
                    morseCode += v[c - 'a'];
               }
               s.insert(morseCode);
          }

          return s.size();
     }
};

// LEETCODE QUESTION - 804