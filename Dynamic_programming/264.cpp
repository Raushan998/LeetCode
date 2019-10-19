#include <iostream>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        int i2=0,i3=0,i5=0,ugly[n+1],ugly_no=1;
        unsigned ugly_number_2=2;
        unsigned ugly_number_3=3;
        unsigned ugly_number_5=5;
        ugly[0]=1;
        for(int i=1;i<n;i++){
                ugly_no=min(ugly_number_2,min(ugly_number_3,ugly_number_5));
                ugly[i]=ugly_no;
                if(ugly_no==ugly_number_2){
                        i2=i2+1;
                        ugly_number_2=ugly[i2]*2;
                }
                if(ugly_no==ugly_number_3){
                        i3=i3+1;
                        ugly_number_3=ugly[i3]*3;
                }
                if(ugly_no==ugly_number_5){
                        i5=i5+1;
                        ugly_number_5=ugly[i5]*5;
                }
        }
        for(int i=0;i<n;i++){
            cout<<ugly[i]<<" ";
        }
        cout<<endl;
        return ugly_no;
    }
};
int main() {
    Solution s;
    int n;
    cin>>n;
    cout<<s.nthUglyNumber(n)<<endl;
    return 0;
}
