// we dont have to mention the ``type`` when it can be deduced from initializer

// but using ``auto`` is considered bad practice if there is no specific requirement

#include<iostream>
using namespace std;

int main(){
    auto i = 10;    // no need of int 
    auto ch = 'a';
    auto b = true;

    // auto tmp;    // this is invalid  ## auto declaration requires intialization
    // error => declaration of 'auto tmp' has no initializer
}