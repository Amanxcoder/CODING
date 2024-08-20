#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the side of Square  :  ";
    cin>>m;
   
    for( int i=1;i<=m; i++){ // rows
      for( int j=1; j<=m; j++){
        cout<<(char)(j+64)<<" ";
      }
      cout <<endl;

    }
}