#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> primes(n+1, 0);
    primes[0] = 1;
    primes[1] = 1;

    for(int i = 2; i*i <= n; i++){
        if(primes[i] == 1) continue;
        for(int j = i*i; j <= n; j += i){
            primes[j] = 1;
        }
    }

    cout<<"Primes till "<<n<<" are"<<"\n";
    for(int i = 2; i <= n; i++){
        if(primes[i] == 0){
            cout<<i<<" ";
        }
    }
}