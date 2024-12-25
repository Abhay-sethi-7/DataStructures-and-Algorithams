#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(12);
    s.push(123);
    s.push(1234);
    s.push(12345);
    int m = s.size();
    cout<<"current element at top: "<<s.top()<<endl;
    for(int i=0; i< m;i++){
cout<<s.top()<<" ";
s.pop();
    }cout<<endl;
    cout<<"size of stack is: "<<m<<endl;
    
    cout<<"is stack empty : "<<s.empty();

    return 0;

}