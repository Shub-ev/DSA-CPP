#include<iostream>
#include<vector>
using namespace std;

void binSearch(vector<int> arr, int key){
    int high = arr.size()-1;
    int low = 0;

    int mid = low + ((high - low) / 2); // replaced ********** (low + high) / 2 *********** bcoz (2^31-1)+(2^31-1) could be error prone  

    while(low <= high){
        if(arr[mid] == key){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }

        mid = low + ((high - low) / 2);
    }
}

int main(){
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    vector<int> arr;

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int key;
    cin>>key;

    binSearch(arr, key);
}