#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    cout<<"size of array is : "<< a.size()<<endl;
    for(int  i : a){
        cout<<i<<endl;
    }
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;//element at particular index
     cout<<"Array is empty or not: "<<a.empty()<<endl;//0 false not empty and vice versa 
     cout<<"Element at front: "<<a.front()<<endl;//front element 
     cout<<"Element at back: "<<a.back()<<endl;//back element
     return 0;
}