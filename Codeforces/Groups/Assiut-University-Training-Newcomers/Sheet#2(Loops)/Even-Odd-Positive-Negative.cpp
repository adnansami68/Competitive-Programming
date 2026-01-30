#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count_even = 0;
    int count_odd = 0;
    int count_positive = 0;
    int count_negative = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

       
        if(x % 2 == 0){
            count_even++;
        } else {
            count_odd++;
        }

      
        if(x > 0){
            count_positive++;
        } else if(x < 0){
            count_negative++;
        }
    }
    cout << "Even: " << count_even << endl;
    cout << "Odd: " << count_odd << endl;
    cout << "Positive: " << count_positive << endl;
    cout << "Negative: " << count_negative << endl;

    return 0;
}
