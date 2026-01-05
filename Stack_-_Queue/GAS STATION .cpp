class Solution
{
public:
     int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
     {
          int balance = 0; // balance
          int deficit = 0;
          int start = 0; // yahi index se ham yaha se movement karna  start karenge

          for (int i = 0; i < gas.size(); i++)
          {
               balance = balance + gas[i] - cost[i];
               if (balance < 0)
               {
                    deficit = deficit + abs(balance);
                    start = i + 1;
                    balance = 0;
               }
          }
          if (balance - deficit >= 0)
          {
               return start;
          }
          else
               return -1;
     }
};

// LEETCODE PROBLEM  - 134
// ISKA PURA DETAILS NOTEBOOK ME QUEQE TOPIC ME HAI