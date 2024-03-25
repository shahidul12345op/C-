#include <iostream>
using namespace std;
class doublyNode{
    public:
    doublyNode* next;
    doublyNode* prev;
    int data;
    doublyNode(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};
void insertHead(doublyNode *&head, int data)
{
    // s1->newNOde creat
    doublyNode *newNode = new doublyNode(data);
    //update of head previour
    head->prev=newNode;
    // s2->update of newnode->next;
    newNode->next = head;
    // s2 -> update of head
    head = newNode;
}
void insertAtTail(doublyNode* &head,int data){
    doublyNode *newnode = new doublyNode(data);
    doublyNode* temp=head;
    if(head==NULL){
        head=newnode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newnode;
    newnode->prev=temp;
}
void printValue(doublyNode *n)
{
    while (n != NULL)
    {
        cout << n->data;
        if (n->next != NULL)
            cout << " ---> ";
        n = n->next;
    }
    cout << endl
         << endl;
}
int countlength(doublyNode *&head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    doublyNode *head = NULL;

    int data;
    cout << "choice 1:Insert at head" << endl;
    cout << "choice 2:Insert at tail" << endl;
    cout << "choice 0:Exit" << endl;
    int choice;

    cout << "Enter choice: ";
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            insertHead(head, data);
            break;

        case 2:
            cout << "Enter data: ";
            cin >> data;
            insertAtTail(head, data);
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Next choice: ";
        cin >> choice;
    }

    cout << endl
         << "doublylinked list: ";
    printValue(head);
    cout << "length of the doubly linked list: " << countlength(head) << endl;

    return 0;
}
