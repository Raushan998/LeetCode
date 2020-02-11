class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1,j=num2.length()-1,carry=0;
        if(num1=="0" && num2=="0")
          return "0";
        string res="";
        while(i>=0 || j>=0){
          if(i>=0 && j>=0){
             int num=(num1[i]-'0')+(num2[j]-'0')+carry;
             res+=(num%10+'0');
             carry=num/10;
             i--,j--;
          }
          else if(i>=0 && j<0){
            int num=num1[i]-'0'+carry;
            res+=(num%10+'0');
            carry=num/10;
            i--;
          }
          else{
            int num=num2[j]-'0'+carry;
            res+=(num%10+'0');
            carry=num/10;
            j--;
          }
        }
      if(carry>0)
        res+=(carry+'0');
      reverse(res.begin(),res.end());
      return res;
    }
};
