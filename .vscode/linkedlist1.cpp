#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int val){
        value = val;
        next =NULL;
    }
};

void insertTail(node* &head,int value){
    node *newNode = new node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
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
    cout << endl << endl;
}
int main()
{
    node *head = NULL;

    int n;
    char choice='Y';
    while(choice == 'Y'){
        cout << "enter the value: ";
        cin >> n;
        insertTail(head, n);
        cout<<"do you want to continue: (Y/N)";
        cin >> choice;
    }
    // insertTail(head,1);
    // insertTail(head,2);
    // insertTail(head,3);
    // insertTail(head,4);
    // insertTail(head,5);
    // node *second = new node();
    // node *third = new node();
    // node *fourth = new node();

    // head->value = 1;
    // second->value = 5;
    // third->value = 8;
    // fourth->value = 9;

    // head->Next = second;
    // second->Next = third;
    // third->Next = fourth;
    // fourth->Next = NULL;

    printValue(head);

    return 0;
}
