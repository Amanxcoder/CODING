#include<iostream>
using namespace std ;
int main(){
    int n1;
    cout<< "Enter First Cordinate n1   :   ";
    cin>>n1;
    int n2;
    cout<<"Enter Second Cordinate  n2 :   ";
    cin>>n2;

    if ( n1>0 && n2>0){
        cout<<" First Coordinate";
    }
    if ( n1<0 && n2>0){
        cout<<" Second Coordinate";
    }
     else if ( n1<0 && n2<0){
        cout<<" Third Coordinate";
    }
      else if ( n1>0 && n2<0){
        cout<<" Fourth Coordinate";
    }
    else if ( (n1>0 || n1<-0 ) && n2==0){ 
        cout<<" X-Coordinate";
    }
    else if ( n1==0 && (n2>0 || n2<0)){
        cout<<" Y- Coordinate";
    }
      if ( n1==0 && n2==0){
        cout<<"Origin";
    
    }


}