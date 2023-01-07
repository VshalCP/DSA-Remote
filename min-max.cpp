#include<iostream>
using namespace std;

int getmin(int arr[], int n){
    int res = arr[0];
    for(int i=1;i<n;i++)
        res = min(res,arr[i]);
        return res;
}

int getmax(int arr[], int n){
    int res = arr[0];
    for(int i=1;i<n;i++)
        res = max(res,arr[i]);
        return res;
}


int main(){

   /* int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }*/
    
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getmin(arr,n)<<" "<<getmax(arr,n);
}