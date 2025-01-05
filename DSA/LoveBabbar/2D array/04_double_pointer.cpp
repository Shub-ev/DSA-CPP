#include<iostream>
using namespace std;

int main(){
    int a = 10;

    int* p = &a;

    int **ptr = &p;

    cout<<"Value of A direct: "<< a <<endl;
    cout<<"Value of A through p: "<< *p <<endl;
    cout<<"Value of A through ptr: "<<**ptr<<endl;

    cout<<"Address of A direct: "<< &a <<endl;
    cout<<"Address of A through p: "<< p <<endl;
    cout<<"Address of A through ptr: "<< *ptr <<endl;

    cout<<"Address of p direct: "<< &p <<endl;
    cout<<"Address of p through ptr: "<< ptr <<endl;
    

    return 0;
}