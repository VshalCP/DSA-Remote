#include<bits/stdc++.h>
using namespace std;


void transform(int arr[], int n){
    map<int, int>mp;
    for(int i=0;i<n;i++){  //element in map will be stored in sorted order
        mp[arr[i]] = i; 
    
    int inx = 1;
    for(auto b: mp){
       arr[b.second] = inx++; //i.second store index of element of i
    }
}
}
int main(){
     int n;
     cin>>n;

     int arr[n];

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    transform(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
     }
}