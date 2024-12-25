#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
   vector<int>v;
v.push_back(32);
v.push_back(38);
v.push_back(3209);
v.push_back(326);
v.push_back(3299);
v.push_back(3782);
v.push_back(362);
v.push_back(324);
v.push_back(3542);
int greater=0;
int lowest=0;
for(int i =0; i<v.size();i++){
greater=max(v[i],v[i+1]);
lowest=min(v[i],v[i+1]);
}cout<<"max: "<<greater<<endl;
cout<<"min: "<<lowest<<endl;
sort(v.begin(),v.end());
for(int i : v){
    cout<<i<<" ";
}cout<<endl;
cout<<"binary search : "<<binary_search(v.begin(),v.end(),3782)<<endl;//finding 3782.
cout<<" lower bound: "<<lower_bound(v.begin(),v.end(),3782)-v.begin()<<endl;
cout<<" upper bound: "<<upper_bound(v.begin(),v.end(),362)-v.begin()<<endl;

    return 0;

}