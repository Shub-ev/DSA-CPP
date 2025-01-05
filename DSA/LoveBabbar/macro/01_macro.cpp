#include<iostream>
using namespace std;

#define PI 3.18
// macro is a pre-processor directive which defined by #define directive
// macros used within the program are replaced by its actual value/code-fragment during the compilation
// macro increases program performance as it dosent take any memory space during program execution

// types of macros:
// 1. Object-like macro
// 2. Chain macro
// 3. Multi-line macro
// 4. Function-like macro

#define Area(l, b) (l * b)  // this is also valid macro

int main(){
    cout<<"Value of PI is "<<PI<<endl; // here PI will be replaced with 3.18 at compile time

    int a = 10, b = 20;
    cout<<"Area is : "<<Area(a,b);
    return 0;
}