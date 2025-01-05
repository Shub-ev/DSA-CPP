#include<iostream>
using namespace std;

// passby value function
void passby_val(int n){
    n++;
}

// pass by ref var function
void passby_ref(int &n){
    n++;
}

int main(){
    int a = 10;

    // this creates a reference var i.e. b also points to mem loc having 10
    int &b = a;

    cout<<a<<" "<<b<<endl;

    // this will change 10 to 11
    b++;
    cout<<a<<" "<<b<<endl;

    passby_val(a);
    cout<<a<<endl;

    passby_ref(a);
    cout<<a<<endl;

    return 0;
}