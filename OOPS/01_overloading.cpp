#include<iostream>
using namespace std;

int add(int, int);
int add(int, int, int);

int main(){
    cout<<add(1,2)<<endl;
    cout<<add(1,2,3)<<endl;
}

//here function name is same but parameters are different
//i.e. func signature is different 
//hence it is a function overloading
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}