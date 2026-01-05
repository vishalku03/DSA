class Solution
{
public:
     bool static compare(string a, string b)
     {
          return (a + b) > (b + a);
     }

     string printLargest(int n, vector<string> &arr)
     {
          string ans;
          sort(arr.begin(), arr.end(), compare);

          for (auto &s : arr)
          {
               ans = ans + s;
          }
          return ans;
     }
};

// GFG POTD