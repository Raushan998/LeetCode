#include<iostream>
using namespace std;
int get_grammer(int N,int K){
    if(N==1)
       return 0;
    int digit=get_grammer(N-1,(K+1)/2);
    if(digit==0){
        if(K%2==0)
            return 1;
        else
           return 0;
     }
     return K%2;
}
int main(){
   int N,K;
   cin>>N>>K;
   cout<<get_grammer(N,K)<<endl;
   return 0;
}
