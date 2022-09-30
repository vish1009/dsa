#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low,int high,int val){
    
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==val){
        return mid;
    }
    if(arr[mid]>val){
        binary_search(arr,mid+1,high,val);
    }
    if(arr[mid]<val){
        binary_search(arr,low,mid-1,val);
    }

}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<binary_search(arr,0,4,3);


}