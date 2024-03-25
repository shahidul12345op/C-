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
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertHead(node *&head, int val)
{
    // s1->newNOde creat
    node *newNode = new node(val);
    // s2->update of newnode->next;
    newNode->next = head;
    // s2 -> update of head
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
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
            cout << " -> ";
        n = n->next;
    }
    cout << endl
         << endl;
}
int countlength(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    node *head = NULL;

    int value, position;
    cout << "choice 1:Insert at head" << endl;
    cout << "choice 2:Insert at tail" << endl;
    cout << "choice 3:Insert at the specified position" << endl;
    cout << "choice 4:Search value(qnique list)" << endl;
    cout << "choice 5:search value(duplicate enable list)";
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
            cout << "enter the vaule to search: ";
            cin >> value;
            position = searchValue(head, value);
            if (position == -1)
            {
                cout << "not found" << endl;
            }
            else
            {
                cout << "the number is at position: " << position << endl;
            }

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
