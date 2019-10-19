#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==0)
            return 0;
        int i=s.length()-1,count=0;
        for(int j=i;j>=0 && s[j]!=' ';j--){
            cout<<s[j]<<endl;
            count+=1;
        }
        return count;
    }
};
int main(){
   string s;
   getline(cin,s);
   Solution temp;
   cout<<temp.lengthOfLastWord(s)<<endl;
   return 0;
}
