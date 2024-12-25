#include <iostream>
#include<list>
using namespace std;

int main(){
 list<int>list_1;
 list_1.push_back(1);
 list_1.push_back(11);
 list_1.push_front(111);
 for(int i:list_1){
    cout<<i<<endl;

 }
 list_1.erase(list_1.begin());
 for(int i:list_1){
    cout<<"list after erase: "<<i<<endl;
 }
 cout<<"size of the list is: "<<list_1.size()<<endl;;
 //copying one list to another :
 list<int> list_2(list_1);
 for(int i:list_2){
    cout<<i<<endl;

 }
  list<int> list_3(5,12); //5 eleemnts with value 12
  for(int i:list_3){
    cout<<i<<endl;

 }
    return 0;

}