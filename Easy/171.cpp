class Solution {
public:
    int titleToNumber(string s) {
      unsigned int x=0,factor=1;
       for(int i=s.length()-1;i>=0;i--){
           x=(s[i]-'A'+1)*factor+x;
           factor*=26;    
       }
       return x;     
    }
};
