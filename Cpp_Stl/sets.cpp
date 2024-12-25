#include<iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main(){
    set<int> set_1;
    set_1.insert(5);
    set_1.insert(4);
    set_1.insert(3);
    set_1.insert(2);
    set_1.insert(5);
    set_1.erase(set_1.begin());
    for(auto i : set_1){
        cout<<i<<endl;
    }
    cout<<"3 is present or not : "<<set_1.count(3)<<endl;
    //Printing v alues after finding 3
    set<int> ::iterator itr  = set_1.find(3);
    for(auto i = itr;i!=set_1.end();i++){
    cout<<(*i)<<endl;
}
unordered_set<int> uset = {10, 5, 20};
   
for (const auto& elem : uset)
        cout << elem << " "; // Output order may vary: 10 5 20
 return 0;
}