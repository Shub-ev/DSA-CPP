#include<iostream>
#include<math.h>
using namespace std;

class B_to_D{
    public:
        int n;

    public:
        B_to_D(){}; //default constructor
        B_to_D(int p) : n(p){}; //parametarized constructor

        int dec(); 
};

int B_to_D :: dec(){
    int res = 0;
    int exp = 0;
    while(this->n != 0){
        res += (n%10) ? pow(2, exp) : 0;
        n = n/10;
        exp++; 
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    B_to_D bd = B_to_D(n);
    cout<<bd.dec();
}