#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if (n <= 1) {
        cout << "NO" << endl;
        return 0;
    }
    bool isPrime=true;
 
    for(int i=2; i<n-1; i++){
        if(n%i==0){
           isPrime=false;
           
           break;
 
        }
 
    }
    if(isPrime==true){
        cout<<"YES "<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 
}
