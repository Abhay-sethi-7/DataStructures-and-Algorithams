#include <iostream>
#include <vector>
using namespace std;

int main(){
 vector <int> vector_1;
 vector <int> vector_2={1,2,3};
 vector <int> vector_3(3,0);
 vector <char> vector_4= {'a','b','c','d','e'};
 cout<<vector_2[2]<<endl;
 cout<<vector_3[2]<<endl;
 for(int i : vector_2){
    cout<<"elements of vector_2 are"<<i<<endl;
 }
  for(char j : vector_4){
    cout<<"elements of vector_4 are"<<j<<endl;
 }

cout<<"---------"<<endl;
cout<<"size of vector_1 is : "<<vector_1.size()<<endl;//returns size.
cout<<"size of vector_2 is : "<<vector_2.size()<<endl;
cout<<"size of vector_3 is : "<<vector_3.size()<<endl;
cout<<"size of vector_4 is : "<<vector_4.size()<<endl;
vector_1.push_back(1);//push element
vector_1.push_back(3);//push element
for(int i : vector_1){
    cout<<i<<endl;
    cout<<"size of vector_1 is : "<<vector_1.size()<<endl;
 }
 cout<<"------";
 vector_2.pop_back();//pop element;
  cout<<"size of vector_2 is : "<<vector_1.size()<<endl;
 cout<< vector_2.front()<<endl;//element at front;
 cout<< vector_2.back()<<endl;//element at back;
cout<<vector_4.at(2);//element at specific index position;
 return 0;}