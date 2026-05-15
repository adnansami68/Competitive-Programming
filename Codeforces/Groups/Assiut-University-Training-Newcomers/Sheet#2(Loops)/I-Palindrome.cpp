#include<iostream>
using namespace std;
 
int main(){
    int n, temp, rev = 0, rem;
 
    cin >> n;
 
    temp = n;
 
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
 
    cout << rev << "\n";
 
    if(temp == rev){
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}
