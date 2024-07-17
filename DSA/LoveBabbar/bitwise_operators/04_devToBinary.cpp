#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
}

class D_to_B{
    public:
        int dec;

    public:
        D_to_B() {};
        D_to_B(int p): dec(p){};

        int binary();
};

int D_to_B::binary(){
    int res = 0;
    int i = 0;

    while(this->dec > 0){
        int bit = this->dec & 1;
        res += (bit * pow(10, i)) + res;
    }
}