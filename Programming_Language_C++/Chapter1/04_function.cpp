// essentially all executable code in placed inside functions and called directly or indirectly

#include<iostream>
using namespace std;    // make names in std(standard library) namespace visible without std::

double square(double n){    // square a double precision floating-point number
    return n * n;
}

// A‘‘return type’’ void indicates that a function does not return a value.
void print_square(double n){
    cout<<"The square of "<<n<<" is : "<<square(n);
}

int main(){
    print_square(4.123);
}