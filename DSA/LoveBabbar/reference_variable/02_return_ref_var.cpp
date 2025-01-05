#include<iostream>
using namespace std;

// returning reference variable as return
// but as function ends all locals are removed from stack hence we dont have reference of it in main
// hence this generates segment fault in execution
int& return_ref_var(int n){
    n += 10;
    return n;
}

int* return_pointer(int &a){
    int *ptr = &a;
    return ptr;
}

int main(){
    int a = 20;
    // int res = return_ref_var(a);

    int *ptr = return_pointer(a);

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}