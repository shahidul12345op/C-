void insertTail(node *&head, int data)
// {
//     node *newNode = new node(data);
//     if (head == NULL)
//     {
//         head = newNode;
//         newNode->next = head;
//         newNode->prev = head;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
//     newNode->next = head;
//     head->prev=newNode;
// }
