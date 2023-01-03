#include<bits/stdc++.h>
using namespace std;


//Sum of AP Series


float Ap(float a, float d, int n){  //if we write int it give us value : 37
    float sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + a;
        a = a + d;        //for ap we have to sum
    }
    return sum;
}

int main(){

    float a = 1.5, d=3;  //sum = (n/2.0)*(2.0*a + (n-1)*d)
    int n = 5;

    cout << Ap(a, d, n) << " ";

}

//Sum of GP series

float Gp(float a, float r, int n){  //if we write int it give us value : 37
    float sum = 0;
    for(int i=0;i<=n;i++){
        sum = sum + a;
        a = a * r;          //for gp we have to mult.
    }
    return sum;
}

int main(){

    float a = 2, r=1.5;  //sum = (n/2.0)*(2.0*a + (n-1)*d)
    int n = 4;

    cout << Gp(a, r, n) << " ";

}
