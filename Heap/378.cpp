#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                pq.push(matrix[i][j]);
            }
        }
        int size=pq.size();
        for(int i=0;i<size-k;i++)
            pq.pop();
        return pq.top();
    }
};
int main(){
     Solution s;
    int n;
    cin>>n;
    vector<vector<int>>vect;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        vect.push_back(temp);
    }
    int k;
    cin>>k;
    cout<<s.kthSmallest(vect,k)<<endl;
    return 0;
}
