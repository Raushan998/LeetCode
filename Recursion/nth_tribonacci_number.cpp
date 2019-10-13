#include<iostream>
using namespace std;
long long tribonacci(long long n){
     if(n==0){
         return 0;
     }
     else if(n==1 || n==2)
         return 1;
     return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}
int main(){
   long long n;
   cin>>n;
   cout<<tribonacci(n)<<endl;
}
