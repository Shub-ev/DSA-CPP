#include<iostream>
#include<string>
using namespace std;

bool palindrome(long long n, int i = 0){
    string str = to_string(n);
    if(i > str.size()/2) return true;

    if(str[i] != str[str.size() - 1 - i]) return false;
    
    return palindrome(n, i + 1);
}

int main(){
    long long l = 10;

    if(palindrome(l)) cout<<"Palindrom";
    else cout<<"Not Palindrom";

    return 0;
}