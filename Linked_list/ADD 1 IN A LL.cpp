#include <bits/stdc++.h>
using namespace std;
struct Node
{
     int data;
     struct Node *next;

     Node(int x)
     {
          data = x;
          next = NULL;
     }
};

class Solution
{
public:
     int solve(Node *head)
     {
          Node *temp = head;
          if (temp == NULL)
          {
               return 1;
          }
          int carry = solve(temp->next);
          temp->data += carry;
          if (temp->data < 10)
               return 0;
          temp->data = 0;
          return 1;
     }
     Node *addOne(Node *head)
     {
          int carry = solve(head);
          if (carry == 1)
          {
               Node *temp = new Node(1);
               temp->next = head;
               head = temp;
          }
          return head;
     }
};