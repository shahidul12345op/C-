#include <iostream>
using namespace std;

template<typename N>class node
{
public:
    N value;
    node *next;
    node *prev;
    node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template<typename S>class Stack
{
public:
    node <S> *top;
    node <S> *head;
    int count = 0;
    Stack()
    {
        top = NULL;
        head = NULL;
    }
    // push
    void push(S val)
    {
        node <S> *newNode = new node<S>(val);
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
    S pop()
    {
        node <S> *delNode = top;
        S chk;
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
    S size()
    {
        return count;
    }
    // top
    S Top()
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

    void printStack(node <S> *head)
    {
        if (empty())
        {
            cout << "Stack is empty";
        }
        else
        {
            node <S> *temp = head;
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

int main()
{
    Stack <string> st;
    st.push("Shahidul Islam");
    st.push("Irfan Ahmed Rafi");
    st.push("Mahfuz Emon");
    st.push("Al Fahmid Jidan");
    cout<<"before pop: "<<endl;
    st.printStack(st.head);
    while (!st.empty())
    {
        cout << st.pop() << endl;
    }
    cout<<"after pop: "<<endl;
    st.printStack(st.head);

    return 0;
}