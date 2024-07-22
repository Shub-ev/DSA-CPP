// 2 3 1 6 3 6 2
// Sample Output 1:
// 1

#include<iostream>
using namespace std;

int findUnique(int a[], int n){
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans = ans ^ a[i];
    }

    return ans;
}

int main(){
    int a[] = { 2, 3, 1, 6, 3, 6, 2 };
    int n = 7;

    cout<<"Unique is : "<<findUnique(a, n);
}