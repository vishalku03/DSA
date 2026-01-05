class Solution
{
public:
     bool detectLoop(Node *head)
     {
          Node *slow = head;
          Node *fast = head;
          Node *temp = head;
          while (fast->next != NULL)
          {
               fast = fast->next;
               if (fast->next != NULL)
               {
                    fast = fast->next;
                    slow = slow->next;
               }
               if (fast == slow)
               {
                    return true;
               }
          }
          return false;
     }
};

// GFG 