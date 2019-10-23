#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void convert(string s, int numRows) {
        char matrix[numRows][2*numRows];
        int i=0,totalrows=numRows,row=0,col=0;
        while(i<s.length()){
            while(row<numRows){
                matrix[row][col]=s[i];
                i++;
            }
            cout<<endl;
            if(row==1){
                numRows=totalrows;
                row=0;
            }
            else{
                numRows=(numRows/2)+1;
                row=numRows/2;
            }
            col++;
       }
       i=0;
        while(i<col){
             for(int row=0;row<numRows;row++)
                 cout<<matrix[row][i]<<" ";
             cout<<endl;
        }
    }
};
int main(){
    Solution s;
     int numRows;
    cin>>numRows;
    string temp;
    cin>>temp;
    s.convert(temp,numRows);
}
