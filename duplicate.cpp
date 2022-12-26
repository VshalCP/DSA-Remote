#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

//For-----Remove Duplicate Element And Then Print Unique Element Like [1 1 2 2 3 3 4 4 4] = [1 2 3 4]

/*void removedupli(int arr[], int n){
    unordered_map<int, bool>mp;

    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) == mp.end()){ //agar element vapis repeate hoga to hi print karega //map doesn't store duplicate element
            cout<<arr[i]<<" "; 
        }
        mp[arr[i]] = true;     //insert element in hash  //vvisted true hoga
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    removedupli(arr,n);
}*/


//For-----Find All Repeating Element 

void Repeat(int arr[], int n){

  unordered_map<int, int>mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto x : mp){
    if(x.second >= 2){
    cout<<x.first<<" ";
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

    Repeat(arr, n);
}

//For-----Find All Non-Repeating Element 

/*void nonRepeat(int arr[], int n){

  unordered_map<int, int>mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto x : mp){
    if(x.second == 1){
    cout<<x.first<<" ";
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

    nonRepeat(arr, n);
}*/