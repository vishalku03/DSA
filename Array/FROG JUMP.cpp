class Solution
{
public:
     bool canCross(vector<int> &stones)
     {

          unordered_map<int, unordered_set<int>> mp;

          // 1st stone is always 0 and jump is 1
          mp[1].insert(1);

          for (int i = 1; i < stones.size(); i++)
          {
               for (auto it : mp[stones[i]])
               {
                    mp[stones[i] + it].insert(it);         // k jump
                    mp[stones[i] + it - 1].insert(it - 1); // k-1 jump
                    mp[stones[i] + it + 1].insert(it + 1); // k+1 jump
               }
          }

          // agar frog last tak pahuch jata hai to cross the river
          return mp[stones.back()].size() > 0;
     }
};
// leetcode -- 403