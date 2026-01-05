class Solution
{
public:
     Node *reverseBetween(Node *head, int m, int n)
     {
          // code here
          if (head == NULL)
               return NULL;
          if (m == n)
               return head;
          Node *dummy = new Node(0);
          dummy->next = head;

          Node *prev = dummy;
          Node *curr = head;
          for (int i = 0; i < m - 1; i++)
          {
               prev = prev->next;
               curr = curr->next;
          }
          Node *subHead = curr;

          Node *pre = NULL;

          for (int i = 0; i <= n - m; i++)
          {
               Node *nextNode = curr->next;
               curr->next = pre;
               pre = curr;
               curr = nextNode;
          }

          prev->next = pre;
          subHead->next = curr;

          return dummy->next;
              
     }
};
//GFG