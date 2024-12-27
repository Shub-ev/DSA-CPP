#include<iostream>
using namespace std;

#define func(a) ( \
    (cout << "Value of input is " << (a) << endl), \
    (cout << "This is part of function" << endl) \
)


int main(){
    func(20);
    return 0;
}