#include <iostream>
#include <deque>
using namespace std;
int main(){
 
    deque<int> d;
    d.push_back(5);
    d.push_front(4);
    d.push_front(3);
    d.push_front(2);
    d.push_front(1);
 cout<<"--------before poping---------"<<endl;
    for(int i: d ){
        cout<< i <<endl;
    }
    d.pop_back();
    d.pop_front();
    cout<<"--------After poping---------"<<endl;
    for(int i: d ){
        cout<< i <<endl;
    }
     cout<<"-----------------------------"<<endl;
     cout<<"element at index 2: "<<d.at(2)<<endl;
     cout<<"Size of deque : "<<d.size()<<endl;
     cout<<"element at front: "<<d.front()<<endl;
     cout<<"Is deque empty ? : "<<d.empty()<<endl;
     cout<<"element at back: "<<d.back()<<endl;
     cout<<"----------Before erase size----------"<<d.size()<<endl;
     d.erase(d.begin(),d.begin()+1);
     cout<<"----------After erase size----------"<<d.size()<<endl;


   return 0;}
 