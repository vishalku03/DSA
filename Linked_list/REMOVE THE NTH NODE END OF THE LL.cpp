
class Solution
{
public:
     ListNode *removeNthFromEnd(ListNode *head, int n)
     {
          ListNode *fast = head;
          ListNode *slow = head;

          for (int i = 1; i <= n; i++)
          {
               fast = fast->next;
          }

          if (fast == NULL)
          {
               ListNode *result = head->next;
               delete (head);
               return result;
          }

          while (fast != NULL && fast->next != NULL)
          {
               slow = slow->next;
               fast = fast->next;
          }

          slow->next = slow->next->next;

          return head;
     }
};

// LEETCODE PROBLEM - 19