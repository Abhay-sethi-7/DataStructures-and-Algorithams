#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(12);
    q.push(123);
    q.push(1234);
q.push(12345);
    int m = q.size();
    
    
    cout<<"first element of queue is: "<<q.front()<<endl;
    for(int i=0; i< m;i++){
cout<<q.front()<<" ";
q.pop();
    }cout<<endl;
    cout<<"size of queue is: "<<m<<endl;
    
    cout<<"is queue empty : "<<q.empty();

    return 0;

}