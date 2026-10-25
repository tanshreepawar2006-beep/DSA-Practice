#include<iostream>
using namespace std;

bool isPrime(int n){
    if (n<2){
        return false;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
           return false;
        }
    }
    return true;
}

void printPrimes(int n){
    for (int i =1;i<=n;i++){
       if (isPrime(i)){
        cout<<i<<" ";
       }
    }
}

int main(){
    
    printPrimes(100);
    
    return 0;
}