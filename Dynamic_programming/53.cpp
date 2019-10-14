#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cur_max=arr[0],maxso_far=arr[0];
    for(int i=1;i<n;i++){
        cur_max=max(arr[i],cur_max+arr[i]);
        maxso_far=max(maxso_far,cur_max);
    }
    cout<<maxso_far<<endl;
}
