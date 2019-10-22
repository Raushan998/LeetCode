#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cordinates) {
        int row=cordinates.size(),x1=cordinates[0][0],x2=cordinates[row-1][0];
        int col=cordinates[0].size(),y1=cordinates[0][1],y2=cordinates[row-1][1];
        if(x2-x1==0)
            throw "false";
        else{
          int m=(y2-y1)/(x2-x1);
          int b=y1-m*x1;
        for(int i=1;i<row-1;i++){
            for(int j=0;j<col-1;j++){
                if(cordinates[i][j+1]==m*cordinates[i][j]+b)
                    continue;
                else
                    return false;
            }

        }
        return true;
      }
    }
};
int main(){
    Solution s;
    vector<vector<int>>vect;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            int num;
            cin>>num;
            temp.push_back(num);
        }
        vect.push_back(temp);
    }
    cout<<s.checkStraightLine(vect)<<endl;
    return 0;
}
