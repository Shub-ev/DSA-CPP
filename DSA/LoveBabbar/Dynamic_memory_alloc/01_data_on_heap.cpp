#include<iostream>
using namespace std;

// memory allocation over heap
// total space = pointer(8 byte) + memory over heap in bytes

int main(){
    int *a = new int;       // this is create memory on heap and return its address to pointer
    // here a is a pointer poiting to memory over heap
    // space = 8 byte pointer + 4 byte int = 12 byte

    cout<<a<<endl;
    cout<<*a<<endl;

    // creating char over heap
    char *chr = new char;
    cout<<chr<<endl;
    cout<<*chr<<endl;
    // space = 8 byte pointer + 1 byte char = 9 byte


    //creating array 
    int *arr = new int[10];


    // free memory
    delete a;  // delete normal var
    delete chr;
    delete []arr; // delete array

    return 0;
}