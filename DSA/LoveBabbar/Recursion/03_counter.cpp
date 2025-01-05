#include<iostream>
using namespace std;

void count_down(int n){
    if(n == 0){
        return;
    }

    cout<<n<<endl;
    count_down(n-1);
}

int main(){
    count_down(10);
    return 0;
}