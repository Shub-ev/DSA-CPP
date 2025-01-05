// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int, int> countMap;
//         unordered_set<int> uniqueCounts;

//         for (int num : arr) {
//             countMap[num]++;
//         }

//         for (const auto& pair : countMap) {
//             if (!uniqueCounts.insert(pair.second).second) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };


#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;

bool findUniq(vector<int> arr)
{
    unordered_map<int, int> countMap;
    unordered_set<int> uniqueCounts;

    for (int num : arr)
    {
        countMap[num]++;
    }

    for (const auto &pair : countMap)
    {
        if (!uniqueCounts.insert(pair.second).second)
        {
            return false;
        }
    }

    return true;
}

int main()
{
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

    bool ans = findUniq(arr);

    if(ans) cout<<"True";
    else cout<<"False";

    return 0;
}