//-------------------------lecture 2---------------------------
#include <iostream>
using namespace std;
void reachHome(int src, int dest){
    
    cout  <<src<<"->";
 if(src==dest) {
    cout<<"reached my home!"<<endl;
    return ;
}
reachHome(src+1 , dest);}
// leet code
int febonacci(int n){
    // int first =0 ;
    // int second = 1;
    if(n==0) return 0;
    if(n==1) return 1;
    int ans = febonacci(n-1)+febonacci(n-2);
    return ans;
}
// code studio
int countWays(int n){
if(n<0) return 0;
if(n==0) return 1;
int ans = countWays(n-1) +countWays(n-2);
return ans;
}

// Sayy Digits eg 421 = four two one
void sayDigit(string arr[] ,int number){
    if(number ==0) return;
    int digit = number % 10;
    number = number/10;
    sayDigit(arr,number);
   cout<<arr[digit]<<" ";
}
int main(){
//  int dest = 10;
//  int src = 1;
 string arr[10]={"zero ", "one", "two", "three", "four", "five", "six", "seven" ,"eight" ," nine"};

int number;
 cin>>number;

        sayDigit(arr, number);
    
 //reachHome(src,dest);
//  int n;
//  cin>>n;
//  cout<<endl;
// cout<<febonacci(n);
// cout<<endl;
// cout<<countWays(n);
    return 0;

}