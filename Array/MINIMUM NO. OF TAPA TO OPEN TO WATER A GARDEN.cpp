class Solution
{
public:
     int minTaps(int n, vector<int> &ranges)
     {

          vector<int> startEnd(n + 1, 0);
          // iss loop se ham start aur end ko nikal rhe hai;
          for (int i = 0; i < ranges.size(); i++)
          {
               int start = max(0, i - ranges[i]);
               int end = min(n, i + ranges[i]);

               startEnd[start] = max(startEnd[start], end);
          }

          int taps = 0;
          int maxEnd = 0;
          int currEnd = 0;

          // yaha ham ye nika rhe hai ki kitna bar taps ko chlayenge
          for (int i = 0; i <= n; i++)
          {
               if (i > maxEnd)
                    return -1;

               if (i > currEnd)
               {
                    taps++;
                    currEnd = maxEnd;
               }

               maxEnd = max(maxEnd, startEnd[i]);
          }
          return taps;
     }
};

// leetcode -  1326