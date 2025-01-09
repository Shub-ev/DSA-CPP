#include<iostream>
using namespace std;

string reverse(string str, int i = 0){
    if(i == str.size()/2) return str;

    swap(str[i], str[str.size() - i - 1]);

    return reverse(str, i + 1);
}

int main(){

    string str = "another";
    cout<<reverse(str);

    return 0;
}