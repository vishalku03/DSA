class Solution
{
public:
     int hammingDistance(int x, int y)
     {
          int count_ans = 0;
          for (int i = 31; i >= 0; i--)
          {
               int ans1 = (x & (1 << i));
               int ans2 = (y & (1 << i));
               if (ans1 != ans2)
                    count_ans++;
          }
          return count_ans;
     }
};

// leetcode - 461