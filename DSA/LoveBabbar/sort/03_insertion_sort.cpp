// insertion sort

// best case = O(n)
// worst case = O(n^2)

#include<iostream>
using namespace std;


int* insertion_sort(int *arr, int n){
    for(int i = 0; i < n; i++){
        int temp = arr[i];

        int j;
        for(j = i-1; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j]; 
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }

    return arr;
}


int main(){
    int arr[] = {2,1,5,8,0,4,3}; 
    int n = sizeof(arr)/sizeof(int);
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i]<<" ";
    // }

    int *b = insertion_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout<<b[i]<<" ";
    }
}