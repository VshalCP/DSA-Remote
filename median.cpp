#include<bits/stdc++.h>
using namespace std;

void getMedian(int arr[], int n){
    sort(arr,arr+n);
    if(n%2==0){
        int ind1 = (n/2)-1;
        int ind2 = (n/2);
        cout<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else{
        cout<<arr[(n/2)];
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getMedian(arr,n);
}