// assignment is the process of assigning value(literal/result of expression) to variable

#include <iostream>
#include <complex>
#include <vector>
using namespace std;

// = is traditional for assignment
// {} can also be used to assign values

int main(){
    int n = 10;     // = assignment operator

    // curly-brace-delimited initializer list
    // same as group of values assigning to array

    double d {10.5};    // this is also a way to initialize the variable
    cout<<d<<endl;

    // same as 
    complex<double> z {1};      // valid -> 1 + oi
    complex<double> z1 {1,2};   // valid -> 1+2i

    int n1 = {10.5};    // = is redundant and can be removed

    cout<<z1<<endl;

    // also
    vector<int> v {1,2,3,4,6,9};


    // advantages of {}
    // 1. it saves us from implicit typecasting
    // int n1 {10.5};  // error => narrowing conversion of '1.05e+1' from 'double' to 'int' inside { }
}