#include <iostream>
using namespace std;
class Hero{
private:
int health;
public:
int level;
int getHealth(){
    return health;
}
int setHealth(int h){
    health = h;
    return health;
}
int getLevel(){
    return level;
}
int setLevel(int l){
    level = l;
    return level;
}
Hero(){
    cout<<"i am a default constructor"<<endl;
}
Hero(int health){
    cout<<"i am a parametrized constructor"<<endl;
    this->health = health;
   cout<<health;
}


};
int main(){
 Hero Abhay(22) ;//static declaration
 Hero *abhay = new Hero(23);// dynamic declaration

 Hero a(Abhay);

 (*abhay).setHealth(9); //(*abhay) derefrencing/-> can also be used
cout<<"health abhay: "<<  (*abhay).getHealth()<<endl;
Abhay.setHealth(99);
cout<<"health : "<< Abhay.getHealth()<<endl;
cout<<"size : "<< sizeof(Abhay)<<endl;
Abhay.setLevel(2);
cout<<"level: "<< Abhay.getLevel()<<endl;

    return 0;

}
// Padding is introduced in memory allocation to ensure proper alignment of data within structures. CPUs have specific memory alignment requirements for different types of data. When you have a structure containing different data types, the compiler might insert "padding bytes" between members to align them according to the CPU's requirements. 

// Greedy alignment refers to the practice of arranging the members of a structure or class in such a way that padding is minimized. By placing members with larger alignment requirements before those with smaller alignment requirements, you can potentially reduce the amount of padding required.
// In languages like C++, where memory layout has a significant impact on performance due to cache lines and memory access patterns, arranging members to minimize padding can lead to better memory utilization and potentially improved runtime efficiency.