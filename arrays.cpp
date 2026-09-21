#include <iostream>
using namespace std;
int main(){
int arr[6]={10,20,7,11,8,4};//searching an element in array 
int x;
cin>>x;
int index=-1;
for(int i=0;i<=5;i++){
    if(arr[i]==x){
        index=i;
        break;
    }
    else{
        index=-1;
    }
}cout<<index<<endl;
//reverse an array
for (int i=5;i>=0;i--){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"method 1 of reversing "<<endl;
//second method of reversing an array
int start=0;int end=5;
while(start<=end){
    swap(arr[start],arr[end]); //swapping is inbuilt function which swaps two numbers
    start++;
    end--;

} for(int i=0;i<=5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"method 2 of reversing "<<endl;
cout<<"to find the second largest element in array "<<endl;
int n;int arr2[n];int i ; int ans;
cout<<"enter the size of array"<<endl;
cin>>n;
for(i =0;i<n;i++){
    cout<<"enter the elements of array"<<endl;
    cin>>arr[i];
}
for(i=0;i<n;i++){
    if(arr[i]>arr[0]){
        ans=arr[i];//finding the largest element in array 
    }
}
for(i=0;i<n;i++){
    if(ans!=arr[i]){
        ans=max(ans,arr[i]);//using inbuilt function max to find the maximum number
    }
}
return 0;
}

