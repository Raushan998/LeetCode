class Solution {
public:
    int reverse(int num){
      int res=0;
      while(num>0){
        res+=(num%10)*(num%10);
        num/=10;
      }
      return res;
    }
    bool isHappy(int n) {
        set<int>set_;
        while(1){
          n=reverse(n);
          if(n==1)
            break;
          if(set_.find(n)!=set_.end())
            return false;
          else
            set_.insert(n);
        }
      return true;
    }
};
