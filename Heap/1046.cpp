#include<bits/stdc++.h>
using namespace std;
class Solution{
   public:
    int lastStoneWeight(vector<int>& stones) {
          priority_queue<int>pq;
          for(int i=0;i<stones.size();i++){
              pq.push(stones[i]);
          }
          while(pq.size()!=1){
              if(pq.empty()==true)
                  break;
              int x=pq.top();
              pq.pop();
              int y=pq.top();
              pq.pop();
              if(x==y)
                 continue;
              else
                pq.push(abs(y-x));
          }
          if(!pq.empty())
              return pq.top();
          else
              return 0;
    }
};
int main(){
    vector<int>vect;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vect.push_back(num);
    }
    Solution s;
    cout<<s.lastStoneWeight(vect)<<endl;
}
