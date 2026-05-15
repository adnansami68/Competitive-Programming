#include <iostream>
using namespace std;
 
int main() {
    int n;
    bool isPrime;
 
    cin >> n;
 
    for (int i = 2; i <= n; i++) {
        isPrime = true;
 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
 
        if (isPrime) {
            cout << i << " ";
        }
    }
 
    return 0;
}
