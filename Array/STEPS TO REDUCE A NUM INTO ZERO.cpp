class Solution
{
public:
     int reduceToZero(int num, int count)
     {
          if (num == 0)
               return count;

          if (num % 2 == 0)
          {
               return reduceToZero(num / 2, count + 1);
          }
          else
               return reduceToZero(num - 1, count + 1);
     }
     int numberOfSteps(int num)
     {
          int count = 0;
          return reduceToZero(num, count);
     }
};


// leetcode 42