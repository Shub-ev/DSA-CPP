#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>temp;
		a[temp]=temp;
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			return i;
		}
	}
	return -1;
}
