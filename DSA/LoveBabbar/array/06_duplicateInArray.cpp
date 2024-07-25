// find duplicate in N sized array having 1 to N-1 numbers

#include<iostream>
using namespace std;

void findDup(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int res = n*(n-1)/2;
    cout<<(sum - res)<<endl;
}

int main(){
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr[n];

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>arr[i];
    }

    findDup(arr, n);
}