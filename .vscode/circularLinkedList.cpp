#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insertTail(node *&head, int value)
{
    node *newNode = new node(value);
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head; // temp->next
    temp->next = newNode;
}

void insertHead(node *&head, int val)
{
    // s1->newNOde creat
    node *newNode = new node(val);
    // s2->update of newnode->next;
    newNode->next = head;
    // update the tail with new head;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    // s4 -> update of head
    head = newNode;
}

void insertAtThespecifiedposition(node *&head, int position, int value)
{
    int i = 0;
    node *temp = head;
    while (i < position - 2)
    {
        temp = temp->next;
        i++;
    }
    node *newNode = new node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}
int searchValue(node *&head, int key)
{
    node *temp = head;
    int count = 1;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->value != key)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        count++;
    }
    return count;
}

void printValue(node *n)
{

    if (n == NULL)
    {
        cout << "No value found" << endl;
        return;
    }
    node *temp = n;
    do
    {
        cout << n->value;
        if (n->next != head)
            cout << " -> ";
        n = n->next;
    } while (temp != head);
            cout
        << endl
        << endl;
}
int countlength(node *&head)
{
    int count = 0;
    node *temp = head;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}
int main()
{
    node *head = NULL;

    int value, position;
    cout << "choice 1:Insert at head" << endl;
    cout << "choice 2:Insert at tail" << endl;
    cout << "choice 3:Insert at the specified position" << endl;
    cout << "choice 4:Deletion at head" << endl;
    cout << "choice 5:Deletion at tail" << endl;
    cout << "choice 6:Deletion at the specified position" << endl;
    cout << "choice 0:Exit" << endl;
    int choice;

    cout << "Enter choice: ";
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            insertHead(head, value);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> value;
            insertTail(head, value);
            break;

        case 3:
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            insertAtThespecifiedposition(head, position, value);
            break;

        case 4:

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Next choice: ";
        cin >> choice;
    }

    cout << endl
         << "linked list: ";
    printValue(head);
    cout << "length of the list: " << countlength(head) << endl;

    return 0;
}
