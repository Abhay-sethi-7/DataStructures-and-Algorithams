#include <iostream>
using namespace std;
//array sorted or not.
bool isSorted(int arr[],int size){
    //base
    if(size==0|| size == 1) return true;
    if(arr[0]>arr[1]) return false;
    else {
        bool ans = isSorted(arr+1 , size-1);
        return ans;
    }
}
//sum of array elements.
int arraySum ( int arr[] , int size){
    int sum =0;
    if(size==0){
        sum =0;
    }
    if(size==1){
        sum=arr[0];
    }
    else {
        sum = arr[0] + arraySum(arr+1,size-1);
    }
    return sum;
}
//linear search.
bool linearS(int arr[],int size,int key){
 if( size==0 ) return false;
 if(arr[0]==key) return true;
 else {
    bool remaining = linearS(arr+1,size-1,key);
    return remaining;
 }
}
// binary search.
bool binaryS(int arr[],int start,int end,int key){
   if( start>end ) return false; 
int mid =start+ (end-start)/2;
if(arr[mid]==key) return true;
   
    if(arr[mid]<key){
 binaryS(arr,mid+1,end,key);
    }
    else{
 binaryS(arr,start,mid-1,key);
    }

}
int main(){
 int arr[5] = { 3,5,1,2,9};
 int size = 5;
 int key = 3;
 bool ans = isSorted(arr,size);
 //cout<<ans;
cout<<binaryS(arr,3,9,3);
cout<<linearS(arr,size,key);
  //cout<< arraySum(arr,size);
    return 0;

}