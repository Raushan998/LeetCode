#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
      int i=0,j=s.length()-1;
      while(i<j){
          cout<<s[i]<<" "<<s[j]<<endl;
          while((i<j) && !isalnum(s[i]))
             i++;
          while((i<j) && !(isalnum(s[j])))
             j--;
          if(i<j && tolower(s[i++])!=tolower(s[j--]))
              return false;
      }
      return true;
  }
};
int main(){
   Solution s;
   string temp;
   getline(cin,temp);
   cout<<s.isPalindrome(temp)<<endl;
   return 0;
}
