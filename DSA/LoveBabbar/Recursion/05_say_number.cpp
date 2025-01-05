#include<iostream>
using namespace std;

string str_num[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "seven", "eight", "nine" };

void count(int num){
    if(num == 0) return;

    count(num/10);

    int n = num%10;
    cout<<str_num[n]<<" ";
}

int main(){
    count(1234);
    return 0;
}