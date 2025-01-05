#include<iostream>
using namespace std;

#define arr 1,\ 
            2,\
            3,\

int main(){
    int ar[] = {arr};
    for(int i = 0; i < sizeof(ar)/4; i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}