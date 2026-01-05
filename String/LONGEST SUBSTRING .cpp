#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string str)
{
     int ans = -1;
     int res = 0;
     int i = 0;
     map<char, int> mp;
     while (i < str.size())
     {
          if (mp.count(str[i]) == 0)
          {
               mp.insert({str[i], i});
               i++;
          }
          else
          {
               int temp = mp.size();
               res = max(temp, res);
               i = mp[str[i]] + 1;
               mp.clear();
          }
     }

     if (res < mp.size())
     {
          return mp.size();
     }
     return res;
}

//GFG