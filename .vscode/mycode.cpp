#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node(int val){
        value = val;
        next = NULL;
    }

};
void insertAtHead(node *head,int value){
    node *newNode = new node(value);
    if(head == NULL){
        newNode=head;
    }
    else{
        newNode->next = head;
        head=newNode;
    }
}
void printValue(node *n){
   while(n != NULL){
     cout << n->value;
        if (n->next != NULL)
            cout << " -> ";
        n = n->next;
   }
   cout<< endl;
   cout<< endl;
}
int main(){
    node *head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,5);
    printValue(head);
}
//#include<iostream>
// using namespace std;

// class node {
// public:
//     int value;
//     node* next;

//     node(int val) {
//         value = val;
//         next = NULL;
//     }
// };

// void insertAtHead(node*& head, int value) {
//     node* newNode = new node(value);
//     if (head == NULL) {
//         head = newNode;
//     }
//     else {
//         newNode->next = head;
//         head = newNode;
//     }
// }

// int main() {
//     node* head = NULL;
//     insertAtHead(head, 4);
//     insertAtHead(head, 5);

//     // Print the linked list values
//     node* current = head;
//     while (current != NULL) {
//         cout << current->value << " ";
//         current = current->next;
//     }

//     return 0;
// }
