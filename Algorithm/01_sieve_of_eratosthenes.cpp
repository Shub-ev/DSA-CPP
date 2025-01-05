// this algorithm is used to quickly calculate prime numbers before n number

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int n = 10;     // 

    vector<bool> primes(n+1, true);
    primes[0] = false;
    primes[1] = false;

    int res = 0;

    for(int i = 2; i < n; i++){
        if(primes[i]){
            for(int j = i*2; j < n; j += i){
                primes[j] = false;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(primes[i] == true){
            res++;
        }
    }

    cout<<res;

    return 0;
}