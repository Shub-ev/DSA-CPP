#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	for(int k = 0; k < n; k++){
		string str1, str2;
		char temp;
		cin>>str1>>str2;
		
		temp = str2[0];
		str2[0] = str1[0];
		str1[0] = temp;

		cout<<str1<<" "<<str2<<"\n";
	}
}
