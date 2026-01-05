class StockSpanner
{
public:
     stack<pair<int, int>> ans;
     StockSpanner()
     {
     }

     int next(int price)
     {
          int res = 1;
          while (ans.size() && ans.top().first <= price)
          {
               res += ans.top().second;
               ans.pop();
          }
          ans.push({price, res});
          return res;
     }
};
// LEETCODE PROBLEM -  901