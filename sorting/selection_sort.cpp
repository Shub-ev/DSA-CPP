#include<iostream>
using namespace std;

int* SelectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int min_index = i;
        for(int k = i+1; k < n; k++){
            if(a[k] < a[min_index])
                min_index = k;
        }

        if(min_index != i)
            swap(a[i], a[min_index]);
    }

    return a;
}

int main() {
    int a[] = {64, 23, 11, 5, 2};

    int* b = SelectionSort(a, 5);

    for(int i = 0; i < 5; i++){
        cout<<b[i]<<" ";
    }
}