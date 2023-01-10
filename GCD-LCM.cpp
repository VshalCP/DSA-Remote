#include<bits/stdc++.h>
using namespace std;


//GCD of Two Number is
/*
int main(){
    int n1=4,n2=8;
    int ans;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1 % i==0 && n2 % i==0){            //find max value of i (here it is 4)
            ans = i;
        }
    }
    cout << "The GCD is : "<< ans;
}*/

//LCM of two Number is


int main(){
    int n1=4,n2=8;
    int gcd;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1 % i==0 && n2 % i==0){
            gcd = i;
        }
    }
    int lcm = (n1*n2)/gcd;
    cout<<"The LCM is :" << lcm << " ";
}