/*Form the Largest Number*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool compareOp(string a , string b)
    {
        return a + b > b + a;
    }

    string findLargest(vector<int> &arr) {

        vector<string> ans;
        for(int x : arr)
        {
            ans.push_back(to_string(x));
        }

        sort(ans.begin(), ans.end(), compareOp);
        if(ans[0] == "0")
            return "0";

        string result = "";
        for(string s : ans)
        {
            result += s;
        }

        return result;
    }
};