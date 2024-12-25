#include <iostream>
#include <queue>
using namespace std;
int main(){
 //max_heap
    priority_queue<int> p_max;
    //min_heap
    priority_queue<int,vector<int>,greater<int> > p_min;
    p_max.push(785);
    p_max.push(864);
    p_max.push(6893);
    p_max.push(27);
    p_max.push(189);
 cout<<"---size----"<<p_max.size()<<endl;
 int n = p_max.size();
    for(int i=0;i<n;i++){
        cout<<p_max.top()<<" ";
        p_max.pop();
    }cout<<endl;
    cout<<"[][][][][][][][][][][][][][][][][][][][][][][][][][][][]"<<endl;
    p_min.push(785);
    p_min.push(864);
    p_min.push(6893);
    p_min.push(27);
    p_min.push(189);
 cout<<"---size----"<<p_min.size()<<endl;
 int m = p_min.size();
    for(int i=0;i<m;i++){
        cout<<p_min.top()<<" ";
        p_min.pop();
    }cout<<endl;
   
   return 0;}
 