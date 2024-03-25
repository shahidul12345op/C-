// #include<iostream>
// using namespace std;
// void towerofHanoi(int n,char src,char dest,char aux){
//     if(n==0) return;
//     towerofHanoi(n-1,src,aux,dest);
//     cout<< "move to " << src << "to" << dest;
//     towerofHanoi(n-1,dest,aux,src);
// }
// int main(){
//     towerofHanoi(4,'A','B','C');
//     return 0;
// }
#include<iostream>
using namespace std;

void towerofHanoi(int n, char src, char dest, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << src << " to " << dest << endl;

        return;
    }

    towerofHanoi(n - 1, src, aux, dest);
    cout<< "Move disk " << n << " from " << src << " to " << dest << endl;
    towerofHanoi(n - 1, aux, dest, src);
}

int main() {
    towerofHanoi(3, 'A', 'B', 'C');
    return 0;
}
