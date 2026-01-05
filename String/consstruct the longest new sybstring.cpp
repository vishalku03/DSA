class Solution
{
public:
     int longestString(int x, int y, int z)
     {
          int a = min(x, y);
          if (x == y)
          {
               return 2 * (x + y + z);
          }
          else if (x == a)
          {
               return 2 * (x + x + 1 + z);
          }
          else
          {
               return 2 * (y + 1 + y + z);
          }
     }
};

// leetcode- 2745