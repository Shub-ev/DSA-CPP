#include<iostream>
using namespace std;

int* selectionSort(int* arr, int n){
    int count = 0;
    for(int i = 0; i < n-1; i++){
        int small = i;
        for(int j = i+1; j < n; j++){ // i + 1 bcoz no need to compare i with i i.e. j == i
            if(arr[j] < arr[small]){
                small = j;
            }
        }
        count++;
        int temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
    cout<<"Total Iterations : "<<count<<endl;
    return arr;
}

int main(){
    int a[] = {1,7,9,2,3,8,0};
    int* b = selectionSort(a,7);

    for(int i = 0; i < 7; i++){
        cout<<b[i]<<endl;
    }
}