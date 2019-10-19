#include<iostream>
#include<vector>
using namespace std;
bool boolpartition(vector<int>&nums,int &k,int iterator_sum,int targetsum,bool used[],int progressbucket){
        if(k==1)
            return true;
        else if(targetsum==0)
            return false;
        else if(iterator_sum==targetsum){
            k-=1;
            boolpartition(nums,k,0,targetsum,used,0);
        }
        for(int i=progressbucket;i<nums.size();i++){
            if(!used[i] && iterator_sum+nums[i]<=targetsum){
                used[i]=true;
                if(boolpartition(nums,k,iterator_sum+nums[i],targetsum,used,progressbucket+1))
                    return true;
                used[i]=false;
            }
        }
        return false;
    }
bool canPartitionKSubsets(vector<int>& nums, int k) {
      if(k>nums.size())
           return false;
      int targetsum=0;
      for(int i=0;i<nums.size();i++)
          targetsum+=nums[i];
      if(targetsum%k!=0)
          return false;
      bool used[nums.size()]={0};
        return boolpartition(nums,k,0,targetsum/k,used,0);
    }
int main(){
    vector<int>vect;
    int k,n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vect.push_back(num);
    }
    cin>>k;
    cout<<canPartitionKSubsets(vect,k)<<endl;
    return 0;
}
