#include<iostream>
#include<vector>
using namespace std;

int firstOccur(vector<int>& arr, int n, int k){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

int lastOccur(vector<int>& arr, int n, int k){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;

    int ans = -1;

    while(s <= e){
        if(arr[mid] == k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid] < k){
            s = mid + 1;
        }
        else if(arr[mid] > k){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
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

    int first = firstOccur(arr, n, key);
    int last = lastOccur(arr, n, key);

    cout<<first<<" "<<last<<endl;
}