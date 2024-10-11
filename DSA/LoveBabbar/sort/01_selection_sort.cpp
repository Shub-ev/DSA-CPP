#include<iostream>
using namespace std;

int* selectionSort(int* arr, int n){
    for(int i = 0; i < n-1; i++){
        int small = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[small]){
                small = j;
            }
        }
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }

    return arr;
}

int main(){
    int a[] = {1,7,9,2,3,8,0};
    int* b = selectionSort(a,7);

    for(int i = 0; i < 7; i++){
        cout<<b[i]<<' ';
    }
}