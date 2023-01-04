#include<bits/stdc++.h>
using namespace std;

int arms(int n){
      int temp = n;
      int p=0;

      while(n>0){ //(n!=0)
        int rem = n%10;
        p = p + (rem*rem*rem);
        n = n/10;
      }
      if(temp == p){
        return p;
      }
}

int main(){
    int n = 153;

    cout<<"Armstrong number is :" << arms(n) << " ";
}