//-------------------------lecture 1 ---------------------------
#include <iostream>
using namespace std;
int factorial(int n){
    if (n==0 ) return 1;//base case
    int small = factorial(n-1);
    int big = n*small;
    return big;
}
int power(int n){
    if(n==0) return 1;
    int small = power(n-1);
    int big = 2*small;
    return big;
}
void counting(int n){
    if(n==0) return ;
    cout<< n<<" ";
    counting(n-1);
}
int main(){
 int n ; 
 cin>>n;
 cout<<endl;
cout<< factorial(n)<<endl;
cout<< power(n)<<endl;
counting(n);
    return 0;

}