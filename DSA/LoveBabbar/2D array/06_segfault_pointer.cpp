#include<iostream>
using namespace std;

int main(){

    int *ptr = 0;       // this creates null pointer
    int *p = nullptr;   // this is also null pointer

    // both prints 0
    cout<<p<<endl;
    cout<<ptr<<endl;

    int temp = 101;
    *ptr = temp;

    return 0;
}