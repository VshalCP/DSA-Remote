#include<bits/stdc++.h>
using namespace std;


//Remove Vowels
/*string removeVowels(string s){

for(int i=0;i<s.size();i++){
    s[i] = tolower(s[i]);
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        s = s.substr(0, i) + s.substr(i+1);
        i--;
    }

  }
  return s;
}

int main(){
    string s = "take u forward";
    cout << removeVowels(s) <<" ";
}*/

//Remove Spaces From String



int main(){
    string s = "take u forward";
     int l = s.length();

     int c = count(s.begin(), s.end(), ' ');  //count how much space is there 

     remove(s.begin(), s.end(), ' ');         //remove all the spaces 

     s.resize(l-c);                           //risize array by removing their space

    cout << s <<" ";
}

