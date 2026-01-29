#include<iostream>
using namespace std;
 
void bubbleSort(int n, int arr[]){
 
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
 
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            
        }
    }
}
 
void printbubblesort(int n, int arr[]){
 
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
       
    }
    
    cout<<endl;
}
 
int main(){
 
    int n;
    int sum = 0;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubbleSort(n, arr); 
    
    int max_val = arr[n-1]; 
 
   
    for(int i=0; i<n; i++){
        sum += (max_val - arr[i]); 
    }
 
    cout << sum << endl;
 
    return 0;
}
