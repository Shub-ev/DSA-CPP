#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number";
        return 0;
    }

    bool is_prime = true;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}
