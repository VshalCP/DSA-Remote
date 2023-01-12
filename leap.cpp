#include<bits/stdc++.h>
using namespace std;

bool leap(int year){
    if(((year % 4 ==0) && (year % 100 !=0)) || (year % 400 == 0)){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int year = 1996;
    if(leap(year)){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"Not a leap year"<<endl;
    }
}