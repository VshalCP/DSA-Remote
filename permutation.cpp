#include<bits/stdc++.h>
using namespace std;


//permutation

/*int fact(int n){
    if(n<=1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){

    int n=6,r=2;
    int num = fact(n);
    int den = fact(n-r);
    cout << num / den << " ";

}*/

//combination

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){

    int n=6,r=2;
    int num = fact(n);
    int den1 = fact(n-r);
    int den2 =fact(r);
    cout << num / (den1 * den2) << " ";

}