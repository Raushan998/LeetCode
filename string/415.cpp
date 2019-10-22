#include<iostream>
#include<cstring>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
         string k="";
         int l=0;
         while(num1.length()<num2.length()){
             num1='0'+num1;
         }
         while(num2.length()<num1.length())
             num2='0'+num2;
         for(int i=num1.length()-1,j=num2.length()-1;i>=0,j>=0;i--,j--){
             l+=num1[i]-'0'+num2[j]-'0';
             if(l>9){
                 char m=(l-10)+'0';
                 k=m+k;
                 l=1;
             }
             else{
                 char m=l+'0';
                 k=m+k;
                 l=0;
             }
         }
        char m=l+'0';
        if(l==0)
            return k;
        else
            return (m+k);
    }
};
int main(){
    Solution s;
    string num1,num2;
    cin>>num1>>num2;
    cout<<s.addStrings(num1,num2)<<endl;
    return 0;
}
