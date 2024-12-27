#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter Number of rows: ";
    cin>>r;

    int **arr = new int * [r];

    int c;
    for(int i = 0; i < r; i++){
        cout<<"Enter columns for "<< i <<" row: ";
        cin>>c;

        arr[i] = new int[c+1];
        arr[i][0] = c;
    }

    for(int i = 0; i < r; i++){
        for(int j = 1; j <= arr[i][0]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //deallocation
    for(int i = 0; i < r; i++){
        delete [] arr[i];
    }

    delete [] arr;
    return 0;
}