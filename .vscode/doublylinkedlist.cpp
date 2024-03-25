//
// Created by Iftekharul Abedeen on 20/6/23.
//

#include<iostream>

using namespace std;

class node{
public:
    node* back;
    int data;
    node* next;
};

node* LL_insert_to_beginning(node* head,node* back,int newData){ //needs assignment
    node* newNode = new node();
    newNode -> data = newData;
    newNode -> next = head;
    newNode -> back = back;
    return newNode;
}

void LL_insert_to_beginning(node** head,int newData,node** back){ //One without assignment needed
    node* newNode = new node();
    newNode -> data = newData;
    newNode -> next = *head;
    newNode -> back = *back;
    *head = newNode;
}

void LL_insert_before(node** head,**node back, int newdata, int target){
    node* temp = *head;
    node* newNode = new node();
    newNode -> data = newdata;
    if(temp -> data == target){
        LL_insert_to_beginning(head, newdata);
        return;
    }
    while(temp -> next -> data != target && temp -> next != NULL){
        temp = temp ->next;
        if(temp -> next == NULL){
            break;
        }
    }
    newNode -> next = temp -> next -> next;
    temp -> next = newNode;
    return;
}

void LL_insert_after(node* head, int newData, int target){
    node* temp = head;
    while(temp -> next != NULL && temp -> data != target){
        temp = temp -> next;
    }
    node* newNode = new node();
    newNode -> data = newData;
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void LL_insert_at_end(node* head, int newData){
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    node* newNode = new node();
    newNode -> data = newData;
    temp -> next = newNode;
}

void LL_delete_node(node** head, int hasValue){
    node* temp = *head;
    if(temp -> data == hasValue){
        *head = temp -> next;
        free(temp);
        return;
    }
    node* prevNode;
    while(temp != NULL && temp -> data != hasValue){
        prevNode = temp;
        temp = temp -> next;
    }
    if(temp == NULL){
        cout << "The item doesn't exist \n";
        return;
    }
    prevNode -> next = temp -> next;
    free(temp);
}

int main(){
    node* head;

    head = new node();
    head -> data = 1;


    head = LL_insert_to_beginning(head,3);
    LL_insert_to_beginning(&head, 4);

    LL_insert_after(head,2,3);

    LL_insert_at_end(head, 0);

    LL_delete_node(&head,10);
    LL_insert_before(&head, 400,4);
    LL_insert_before(&head, 300,3);
    LL_insert_before(&head, 700,7);
    node* Cursor;
    Cursor = head;
    while(Cursor){
        cout << Cursor -> data << endl;
        Cursor = Cursor -> next;
    }
    return 0;
}