// Floyd Detection Algorithm
class Solution
{
public:
     ListNode *detectLoop(ListNode *head)
     {
          A
              ListNode *slow = head;
          ListNode *fast = head;

          while (fast && fast->next)
          {
               slow = slow->next;
               fast = fast->next->next;

               if (slow == fast)
                    return slow;
          }
          return NULL;
     }

     ListNode *detectCycle(ListNode *head)
     {
          if (head == NULL || head->next == NULL)
               return NULL;

          ListNode *newNode = detectLoop(head);
          if (newNode == NULL)
               return NULL;
          ListNode *slow = head;
          while (slow != newNode)
          {
               slow = slow->next;
               newNode = newNode->next;
          }
          return slow;
     }
};

// leetcode - 142