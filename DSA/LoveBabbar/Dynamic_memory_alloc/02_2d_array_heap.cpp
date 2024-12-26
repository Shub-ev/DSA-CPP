#include<iostream>
using namespace std;

// creting 2d array at heap memory
// steps:
// 1. create 1 array of pointers
// 2. for each pointer at array create a new array

// *0 -> [1,2,3,4,5]
// *1 -> [1,2,3,4,5]
// *2 -> [1,2,3,4,5]
// *3 -> [1,2,3,4,5]


int main(){
    int r = 3;
    int c = 3;

    // create array of pointers -> hence var is double pointer
    int **arr = new int* [r];

    // create array on heap and assign it to each pointer
    for(int i = 0; i < r; i++){
        arr[i] = new int [c];
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // delete array

    for(int i = 0; i < r; i++){
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}