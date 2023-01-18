#include<bits/stdc++.h>
using namespace std;

/*string EkkaDo(string s1, string s2){
    string ans = "";

    for(int i=0;i<s1.length();i++){
        int flag = 0;
        for(int j=0;j<s2.length();j++){
            if(s1[i]==s2[j]){
                flag = 1;
            }
        }
        if(flag!=1){
            ans.push_back(s1[i]);
        }
    }
    return ans;
}

int main(){

    string s1 = "abdhdjs";
    string s2 = "bhjs";

    cout << EkkaDo(s1,s2) << " "; 
}*/

//Find position of second string within firts string

int found(string s1, string s2){  //Also using find function
    

    for(int i=0;i<s1.length();i++){
        int temp = i;
        int  j = 0;
        for(j=0;j<s2.length();j++){
            if(s1[temp]!=s2[j]){
                break;
            }
            temp++;
        }
        if(j == s2.length()){
            return i;
        }
    }
    return -1;
}

int main(){

    string s1 = "takeuforward";
    string s2 = "rward";

    cout << found(s1,s2) << " "; 
}
