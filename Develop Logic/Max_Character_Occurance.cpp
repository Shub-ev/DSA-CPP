#include<iostream>
#include<vector>
using namespace std;

void print_max_char(string str){
    vector<int> res(26, 0);

    for(int i = 0; i < str.size(); i++){
        int num = str[i];
        if(str[i] <= 'z' && str[i] >= 'a'){
            num = num - 'a';
        }
        else if(str[i] <= 'Z' && str[i] >= 'A'){
            num = num - 'A';
        }
        res[num]++;
    }
    int max_num = 0;
    char max_char = 0;

    for(int i = 0; i < str.size(); i++){
        if(res[i] > max_num){
            max_num = res[i];
            max_char = i + 'a';
        }
    }

    cout<<"Num : "<< max_num<<endl;
    cout<<"Char : "<< max_char<<endl;

}

int main(){
    string str = "aaaaddddd";

    print_max_char(str);

    return 0;
}