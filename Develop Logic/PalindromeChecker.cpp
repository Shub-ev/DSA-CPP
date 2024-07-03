#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Enter Number : ";
    string str;
    getline(cin, str);

    //we can solve this palindrome problem using 2 pointer approach

    int left = 0, right = str.size()-1;

    while(left < right){
        while(left < right && !isalnum(str[left]))
            left++;

        while(right > left && !isalnum(str[right]))
            right--;

        if(tolower(str[left]) != tolower(str[right])){
            cout<<"\nNot palindrome";
            break;
        }

        left++;
        right--;
    }

    cout<<"Palindrome";
}
