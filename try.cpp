#include <bits/stdc++.h> 
using namespace std;

void insertionSort(int n, int *arr){
    int t;
    cin>>t;

    while(t > 0){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        for(int i = 1; i < n; i++){
            int curr = arr[i];

            int j = i-1;
            for(; j >= 0; j--){
                if(arr[j] > curr){
                    arr[j+1] = arr[j];
                }
                else{
                    break;
                }
            }
            arr[j+1] = curr;
        }

        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        // cout<<"\n";
        t--;
    }
}

int main(){
    int arr[] = {2,1,5,8,0,4,3};
    insertionSort(7, arr);
}