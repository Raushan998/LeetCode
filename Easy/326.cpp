class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n==1)
        return true;
      else if(n<3)
        return false;
      else{
        return 1162261467%n==0;
      }
    }
    
};
