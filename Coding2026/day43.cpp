
/*Find the closest pair from two arrays*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        
        int i = 0, j= arr2.size()-1,maxDiff = INT_MAX;
        
        vector<int> ans;
        
        while(i < arr1.size() && j >= 0)
        {
            int sum =  arr1[i] + arr2[j];
            int diff =  abs(x-sum);
            
            if(diff < maxDiff)
            {
                maxDiff = diff;
                
                ans = vector<int>{arr1[i] , arr2[j]};
            }
            
            if(sum > x)
            j--;
            else
            i++;
        }
        
        return ans;
    }
};