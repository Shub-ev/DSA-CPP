#include<iostream>
#include<array>
using namespace std;

int matrix_sum(int **arr){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n, m;
    cin>>n>>m;

    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Output Array: "<<endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix Sum is : "<<matrix_sum(arr);
    return 0;
}