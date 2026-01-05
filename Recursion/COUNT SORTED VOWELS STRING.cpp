class Solution
{
public:
     int countVowelStrings(int n)
     {
          int four = pow(n, 4);
          int three = pow(n, 3);
          int two = pow(n, 2);
          int a = (four + 6 * three + 11 * two + 6 * n) / 24;
          int e = (three + 3 * two + 2 * n) / 6;
          int i = (two + n) / 2;
          int o = n;
          int u = 1;
          return (a + e + i + o + u);
     }
};

// leetcode - 1641