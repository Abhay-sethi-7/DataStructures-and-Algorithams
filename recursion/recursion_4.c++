#include <iostream>
using namespace std;

//reverse the string 
void reverseStr(string & str,int i , int j){
if(i>j) return;
swap(str[i],str[j]);
i++;
j--;
reverseStr(str,i,j);
}
// check palindrome:
bool checkPalindrome(string str , int i , int j){
if(i>=j) return true;
if(str[i] != str[j]) 
    {return false;}
else 
    {return checkPalindrome(str,i+1,j-1);}
}
// calculate power:
//can be optimised for negative cases.
int findPower(int a,int b){
    if(b==0){ 
        return 1;
    }else{ int value = a * findPower(a,b-1);
      return value;}
}
//bubble sort:
void bubbleSort(int *arr , int  size){
    if( size== 0 || size == 1){
        return;
    }
    //lrgest element in the end
    for(int i =0;i<size-1;i++){
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    bubbleSort(arr , size-1);
}
int main(){
 string name = "abhayyahba";
 reverseStr(name,0,name.length()-1);
 cout<<name<<endl;
 bool isPalindrome = checkPalindrome(name,0,name.length()-1);
if(isPalindrome){
    cout<<"true paligdrome"<<endl;
}
else {
    cout<<"false"<<endl;
}
cout<<findPower(3,10)<<endl;;
int arr[5]={6,4,7,5,3};
bubbleSort(arr , 5);
for(int i =0 ; i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;

}