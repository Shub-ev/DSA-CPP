#include<iostream>
using namespace std;

void double_pointer(int **ptr){
    // ptr = ptr + 1;           // this will not work as ptr is local for this scope
    
    **ptr = **ptr + 1;          // this will also work

    *ptr = *ptr + 1;            // this will work
}   

int main(){
    int a = 10;

    int* p = &a;

    int **ptr = &p;

    cout<<*ptr<<endl;
    cout<<**ptr<<endl;

    double_pointer(ptr);

    cout<<*ptr<<endl;
    cout<<**ptr<<endl;

    return 0;
}