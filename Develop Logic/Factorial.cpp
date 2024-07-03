#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    if(n == 0){
        cout<<"1";
        return 0;
    }
    else if(n < 0){
        cout<<"Factorial not available.";
        return 0;
    }

    int result = 1;

    while(n >= 1){
        result *= n;
        n--;
    }

    cout<<result;
}
