#include<bits/stdc++.h>
using namespace std;

string lexo(string s){
    for(int i=0;i<s.length();i++){
        int ascii = (int)(s[i]);
        if(ascii == 90){    //Z 
            s[i] = char(65);//A
        }
        else if(ascii == 122){//z
            s[i] = char(97);//a
        }
        else if((ascii >= 65 && ascii < 90) || (ascii >= 97 && ascii < 122)){
            s[i] = char(ascii + 1);
        }
    }
    return s;
}

int main(){
    string s = "abcdefg";

    cout << lexo(s) << " ";
}