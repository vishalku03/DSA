class Solution
{
public:
     int getNthFromLast(Node *head, int n)
     {
          int len = 0;
          Node *n1 = head;
          Node *n2 = head;

          while (n1 != NULL)
          {
               n1 = n1->next;
               len++;
          }
          if (n > len || n <= 0)
          {
               return -1;
          }
          int count = 1;
          while (count < (len - n + 1))
          {
               n2 = n2->next;
               count++;
          }
          return n2->data;
     }
};
// GFG