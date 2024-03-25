#include <iostream>
#include "mystack.h"
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"before popint: "<<endl;
    st.printStack(st.head);
    while (!st.empty())
    {
        cout << st.pop() << endl;
    }
    cout<<"after popint: "<<endl;
    st.printStack(st.head);

    return 0;
}