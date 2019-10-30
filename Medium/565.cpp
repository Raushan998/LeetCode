#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        bool visited[nums.size()+1];
        int count=0;
        for(int i=0;i<nums.size();i++){
            count=max(count,visit(visited,nums,i));
        }
        return count;
    }
    int visit(bool visited[],vector<int>&nums,int index){
        if(index>=nums.size() || visited[index]==true)
            return 0;
        visited[index]=true;
        return 1+ visit(visited,nums,nums[index]);
    }
};
int main(){
    Solution s;
    vector<int>temp;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        temp.push_back(n);
    }
    cout<<s.arrayNesting(temp)<<endl;
    return 0;
}
