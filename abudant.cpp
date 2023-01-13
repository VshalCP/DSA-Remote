#include<bits/stdc++.h>
using namespace std;


int abudant(int n){    //sum of factor is greater than real number

    int sum = 0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){      
            sum = sum +i;
        }
    }
                 
    if(sum>n){
        cout << " Abundant NUmber " <<" ";
    }
    else{
        cout << " Not a Abundant " << " ";
    }

}


int main(){
   int n = 18;
   abudant(n);

}