#include<iostream>
using namespace std;

int Fibonacci(int n){
   int a=0 , b=1;

   for(int i =0;i<=n;i++){
    int next=a+b;
    a=b;
    b=next;
   }
   return a;
}
int main(){
    cout<<Fibonacci(6)<<endl;
    
    return 0;
}