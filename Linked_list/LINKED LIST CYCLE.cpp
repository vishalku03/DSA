class Solution
{
public:
     bool hasCycle(ListNode *head)
     {

          map<ListNode *, bool> mp; // by default map all address are false
          ListNode *temp = head;
          while (temp != NULL)
          {
               if (mp[temp] == false)
               {
                    mp[temp] = true;
               }
               else
               {
                    return true;
               }

               temp = temp->next;
          }
          return false;
     }
};

// LEETCODE PROBLEM - 141