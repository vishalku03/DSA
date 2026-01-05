#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);

        for(int i = 0;i<=n;i++)
        {
            ans[i] =  ans[i>>1]+(i&1);
        }
        return ans;
    }
};

// yah question dp se bhi ban jayega lkein ham apna concept ko clear kar rh ahu

// leetcode  --  338