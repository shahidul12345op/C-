#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *next;
    node *prev;
    node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

class Stack
{
public:
    node *top;
    node *head;
    int count = 0;
    Stack()
    {
        top = NULL;
        head = NULL;
    }
    // push
    void push(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = newNode;
            top = newNode;
            count++;
            return;
        }
        else
        {
            top->next = newNode;
            newNode->prev = top;
            top = newNode;
            count++;
        }
    }
    // pop
    int pop()
    {
        node *delNode = top;
        int chk = -1;
        if (head == NULL)
        {
            cout << "Stack is underflow" << endl;
            return chk;
        }
        if (top == head)
        {
            head = top = NULL;
        }
        else
        {
            top = delNode->prev;
            top->next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
    // empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // size
    int size()
    {
        return count;
    }
    // top
    int Top()
    {
        if (top == NULL)
        {
            cout << "Stack is underflow | the is no value" << endl;
        }
        else
        {
            return top->value;
        }
    }

    void printStack(node *head)
    {
        if (empty())
        {
            cout << "Stack is empty";
        }
        else
        {
            node *temp = head;
            cout << "the Stack is: ";
            while (temp != NULL)
            {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

