#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5]={7,11,15,4,9};
    cout<<sizeof(arr)<<endl; //size of array(in terms of bits)
    //sizeof(a) is inbuilt funtion
    cout<<sizeof(arr)/sizeof(arr[0])<<endl; //size of array(in terms of number of elements)
    //finding min in array
    int ans= INT_MAX;//INT_MAX is inbuilt constant which is maximum value of integer
    for(int i=0;i<5;i++){
        ans=min(ans,arr[i]);//min is inbuilt function which returns minimum of two numbers
        // or we can also write as ans=arr[0]; and then check if(arr[i]<ans) ans=arr[i];
    }
    cout<<ans<<endl;
    return 0;
}
