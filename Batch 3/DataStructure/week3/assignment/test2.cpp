#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
  string val;
  Node *next;
  Node *prev;

  Node(string val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insert_tail(Node *&head, Node *&tail, string val)
{
  Node *newNode = new Node(val);
  if (tail == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  newNode->prev = tail;
  tail = tail->next;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  string val;
  while (true)
  {
    cin >> val;
    if (val == "end")
      break;

    insert_tail(head, tail, val);
  }

  Node *tmp = head;

  int q;
  cin >> q;
  while (q-- && tmp != NULL)
  {
    string cmn;
    cin >> cmn;
    if (cmn == "visit")
    {
      string ad;
      cin >> ad;

      // Node *str  = tmp;
      if (tmp != head)
      {
        tmp = head;
      }

      while (tmp != NULL)
      {
        if (tmp->val == ad)
        {
          cout << tmp->val << endl;
          break;
        }
        tmp = tmp->next;
      }
      if (tmp == NULL)
      {
        cout << "Not Available" << endl;
        // tmp = str;
        // delete str;
      }
    }
    else if (cmn == "prev")
    {
      if (tmp->prev == NULL)
      {
        cout << "Not Available" << endl;
      }
      else
      {
        tmp = tmp->prev;
        cout << tmp->val << endl;
      }
    }
    else if (cmn == "next")
    {
      if (tmp->next == NULL)
      {
        cout << "Not Available" << endl;
      }
      else
      {
        tmp = tmp->next;
        cout << tmp->val << endl;
      }
    }
  }
  return 0;
}
