#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int freq[256] = {0};

    for(int i=0;i<s.length();i++){
        freq[s[i]]++;                     //store freq of element
    }
    for(int i=0;i<256;i++){
        if(freq[i] == 1){
            cout << char(i) << " ";
        }
    }
}