class Solution
{
public:
     vector<vector<int>> merge(vector<vector<int>> &intervals)
     {
          int n = intervals.size();
          vector<vector<int>> ans;

          sort(intervals.begin(), intervals.end()); // ham sare intervals ko solve kar diye

          for (int i = 0; i < n; i++)
          {

               // current interval agar last interval me exist nhi karta ho
               if (ans.empty() || intervals[i][0] > ans.back()[1])
               {
                    ans.push_back(intervals[i]);
               }
               else // agr current interval last interval me lies karta ho

               {
                    ans.back()[1] = max(ans.back()[1], intervals[i][1]);
               }
          }

          return ans;
     }
};
// leetcode  -  56