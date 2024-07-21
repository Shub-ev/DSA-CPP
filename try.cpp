#include<iostream>
using namespace std;

int main(){
    int arr[5] = {59, 42, 63, 90, 52};

    int *b = arr;
    for(int i = 0; i < 5; i++){
        cout<<*(b + i)<<endl;
    }
}