#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n * fact(n-1);
}

int strong(int num){
    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum = sum + fact(digit);
        num = num/10;
    }
    return sum;
}

int main(){
      int n = 145;   //strong meaans sum of individul's digits factorial
      int ans = strong(n);
      if(ans == n && n!=0){
        cout << "yeah it is strong" << " ";
      }
      else{
        cout << "Its not strong" << " ";
      }
}