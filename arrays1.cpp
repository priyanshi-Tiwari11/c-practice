#include<iostream>
using namespace std;
int main(){
    cout<<"to find the second largest element in array "<<endl;
int n;int arr2[n];int i ; int ans;
cout<<"enter the size of array"<<endl;
cin>>n;
for(i =0;i<n;i++){
    cout<<"enter the elements of array"<<endl;
    cin>>arr2[i];
}
for(i=0;i<n;i++){
    if(arr2[i]>arr2[0]){
        ans=arr2[i];//finding the largest element in array 
    }
}
for(i=0;i<n;i++){
    if(ans!=arr2[i]){
        ans=max(ans,arr2[i]);//using inbuilt function max to find the maximum number
    }
}
return 0;
}

