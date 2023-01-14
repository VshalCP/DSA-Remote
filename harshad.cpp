#include<bits/stdc++.h>
using namespace std;

int harhd(int n){  //number divided by thier factor's sum
    int temp = n;
    int sum = 0;
    while(temp!=0){
        sum = sum + temp%10;
        temp=temp/10;
    }
    if(n % sum ==0){
        cout << "Number is Harshad" << " ";
    }
    else{
        cout << "Not a Harshad" << " ";
    }
}


int main(){
    int n=378;
    harhd(n);

}