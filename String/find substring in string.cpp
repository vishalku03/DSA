#include<bits/stdc++.h>

using namespace std;

class Solution
{
public:
     int numJewelsInStones(string jewels, string stones)
     {
          int hash[256] = {0};
          int count = 0;
          for (int i = 0; i < stones.size(); i++)
          {
               hash[stones[i]]++;
          }
          for (int i = 0; i < jewels.size(); i++)
          {
               count = count + hash[jewels[i]];
          }
          return count;
     }
};

/*
leetcode qusstion ==
jewels  ans stones .


   BRUTE FORSE.
   int  count = 0;
   for(int i  =0;i<jewels.size();i++){
       for(int j = 0;j<stones.size();j++)
       {
           if(jewels[i] == stones[j])
           count++;
       }
   }
   return count;


*/