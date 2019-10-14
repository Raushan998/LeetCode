#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max_element=0,min_element=INT_MAX;
    for(int i=0;i<n;i++){
         if(min_element>arr[i]){
              min_element=arr[i];
         }
         else
            max_element=max(max_element,arr[i]-min_element);
    }
    cout<<max_element<<endl;
    return 0;
}
