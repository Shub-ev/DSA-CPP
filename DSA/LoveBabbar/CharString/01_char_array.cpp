#include<iostream>
using namespace std;

int main(){
    // each char saves ASCII value of respective char in its loc.
    char a;
    cout<<a<<endl;

    a = 65;
    cout<<a<<endl;

    char arr[10];
    scanf("%14s", arr);     // here while accepting string via cin or scanf ' ' '\t' or 'enter' submits only first part of str
    // cin>>arr;
    cout<<arr<<endl;
    arr[4] = '\0';
    cout<<arr<<endl;        // cout prints until it gets '\0'

    // char arr[10] = "Shubham Gharage";       // we need arr[16] -> 15 char & 1 '\0' null terminator
    // else this will generate error
    // cout<<arr<<endl;

    string str = "Shubham Gharage";
    cout<<str<<endl;        // stirg is object which uses similar implementation as char array + some string methods

    string str2 = "Shu\0bham\0Gharage";
    char arr2[10] = "Shu\0bham";

    cout<<str2<<endl;
    cout<<arr2<<endl;

    return 0;
}