// Every name and every expression has a type
// that determines the operations can be performed on it

#include<iostream>
using namespace std;

int main(){
    // A declaration is a statement that introduces a name into the program
    int inch;   // it specifies the type of named entity

    // size of a type is implementation-defined i.e. it can varry m/c to m/c
    char ch;    // 1 byte
    int num;    // 4 bytes 

    // hence we can obtain the size of type using "sizeof()" operator
    cout<<sizeof(num)<<"\n";    // 4
    cout<<sizeof(char)<<"\n";   // 1

    return 0;
}