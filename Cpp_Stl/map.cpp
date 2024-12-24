#include <iostream>
#include<map>
#include<String>
#include <unordered_map>
using namespace std;
int main(){
 map<int,string> data;
 data[1]="abhay";
 data[11]="Kumar";
 data[111]="Sethi";
 data[1111]="abhay";
 data.insert( { 11111,"bheem"});
 cout<<"--------Before Erase-------"<<endl;
 for(auto i : data){
    cout<<i.first<<" "<<i.second<<endl;
 }
 cout<<"Is 111 present or not: "<<data.count(111)<<endl;
cout<<"Is 121 present or not: "<<data.count(121)<<endl;
data.erase(1111);
 cout<<"--------After Erase-------"<<endl;
 for(auto i : data){
    cout<<i.first<<" "<<i.second<<endl;
 }
 auto it = data.find(1);
for(auto i = it;i!=data.end();i++){
    cout<<(*i).first<<endl;
}
// auto it = data.find(2);
// if (it != data.end()) {
//     cout << "Found: " << it->second << endl;  // Accessing value
// }



unordered_map<int, string> umap;
    
    // Insert elements
    umap[1] = "Alice";
    umap[2] = "Bob";
    umap[3] = "Charlie";

    // Accessing elements
    cout << "Key 2: " << umap[2] << endl;

    // Iterating through unordered_map
    for (const auto& pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;

}