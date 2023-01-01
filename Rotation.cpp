#include<iostream>
using namespace std;


void Rotate(int arr[], int d, int n){
       int temp[n];

       int k=0;

       for(int i=d;i<n;i++){
        temp[k] = arr[i];
        k++;
       }
       for(int i=0;i<d;i++){
        temp[k] = arr[i];
        k++;
       }
       for(int i=0;i<n;i++){
       arr[i] = temp[i];        
       }
    }
void printar(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    
    int n;
    cin>>n;
     
    int d=2;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Rotate(arr,d,n);
    printar(arr, n);
}