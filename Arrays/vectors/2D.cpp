#include <iostream>
using namespace std;

int main(){
 int m,n;
 cout<<"enter number of rows and columns: "<<endl;
 cin>>m>>n;
 int matrixx[m][n];
 for(int i=0;i<m;i++){
    for (int j = 0; j < n; j++)
    {
        cout<<"enter value for"<<"["<<i<<" "<<j<<"] :";
        cin>>matrixx[i][j];
    }
    
 }
 for(int i=0;i<m;i++){
    for (int j = 0; j < n; j++)
    {
        cout<<"value at"<<"["<<i<<" "<<j<<"] :" "["<<matrixx[i][j]<<"]"<<endl;
    }
    
 }
    return 0;

}