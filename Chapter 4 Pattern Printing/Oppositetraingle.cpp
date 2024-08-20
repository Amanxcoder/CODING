#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows and column";
    cin>>m;
   
    for( int i=1;i<=m; i++){ // rows
      for( int j=1; j<=1+m-i; j++){
        cout<<j<<"  ";
      }
      cout <<endl;

    }
}