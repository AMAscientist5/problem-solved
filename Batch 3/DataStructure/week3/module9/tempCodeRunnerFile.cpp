void delete_at_tail(Node* &head, Node* &tail)
{
  Node* tmp = tail;
 Node* deleted= tmp;
  tmp = tmp->prev;
  delete deleted;
  tmp->prev = NULL;

//   Node* deleted= tail;
//   tail = tail->prev;
//   delete deleted;
// //    if (tail == NULL)
// //     {
// //         head = NULL;
// //         return;
// //     }
//   tail->next = NULL;
}