#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findDup(const vector<int>& arr) {
    unordered_set<int> seen;

    for(int num : arr){
        if(seen.find(num) != seen.end(num)){
            cout<<num<<" is repeated"<<"\n";
        }
        else{
            seen.insert(num);
        }
    }
}

int main() {
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter Array Elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findDup(arr);
    
    return 0;
}
