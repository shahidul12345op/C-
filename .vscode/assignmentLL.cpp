#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    node *prev;
    int data;
    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
void insertHead(node *&head, int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
        return;
    }
    node *temp = head;
    newNode->next = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    head = newNode;
}

void insertAfter(node *&head, int data, int target)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
        return;
    }
    node *temp = head;
    while (temp->data != target)
    {
        temp = temp->next;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void insertBefore(node *&head, int data, int target)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        head->prev = head;
        return;
    }
    node *temp = head;
    while (temp->data != target)
    {
        temp = temp->next;
    }
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev->next = newNode;
    temp->prev = newNode;
}
void deleteNode(node** head, int data)
{
    if (*head == NULL)
        return;
    node *temp = *head, *prev_1 = NULL;
    while (temp->data != data) {
        if (temp->next == *head) {
            printf("\nList doesn't have node with value = %d", data);
            return;
        }
 
        prev_1 = temp;
        temp = temp->next;
    }
    if (temp->next == *head && prev_1 == NULL) {
        (*head) = NULL;
        free(temp);
        return;
    }
    //node at the head of the list
    if (temp == *head) {
        prev_1 = (*head)->prev;
        *head = (*head)->next;
 
       
        prev_1->next = *head;
        (*head)->prev = prev_1;
        free(temp);
    }
    //node at the end of the list
    else if (temp->next == *head) {
       
        prev_1->prev->next = *head;
        (*head)->prev = prev_1;
        free(temp);
    }
    //node in the middle of the list
    else {
        node* temp = temp->next;
        prev_1->next = temp;
        temp->prev = prev_1;
        free(temp);
    }
}

void printValue(node *head)
{

    if (head == NULL)
    {
        cout << "No data found" << endl;
        return;
    }
    node *temp = head;
    do
    {
        cout << head->data;
        if (head->next != head)
            cout << " -> ";
        head = head->next;
    } while (temp != head);
    cout << endl
         << endl;
}

int main()
{
    node *head = NULL;

    int data;
    cout << "choice 1:Insert at head" << endl;
    cout << "choice 2:Insert at After" << endl;
    cout << "choice 3:Insert at Before" << endl;
    cout << "choice 4: delete item" << endl;
    cout << "choice 0:Exit" << endl;
    int choice, target;

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
            cout << "Enter target: ";
            cin >> target;
            cout << "Enter data: ";
            cin >> data;
            insertAfter(head, data, target);
            break;

        case 3:
            cout << "Enter target: ";
            cin >> target;
            cout << "Enter data: ";
            cin >> data;
            insertBefore(head, data, target);
            break;

        case 4:
            cout << "enter data: ";
            cin >> data;
            deleteNode(&head, data);
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Next choice: ";
        cin >> choice;
    }

    cout << endl
         << "the  list: ";
    printValue(head);

    return 0;
}
