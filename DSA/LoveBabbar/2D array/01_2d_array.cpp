#include<iostream>
using namespace std;

// this is how we create 2d array
// even array is 2d it is saved linearly in memory

// formula = c * i + j

void _2d_linear_search(int arr[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout<<*(*(arr + j) + i);
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {0, -1, -2}};
    _2d_linear_search(arr);

    return 0;
}