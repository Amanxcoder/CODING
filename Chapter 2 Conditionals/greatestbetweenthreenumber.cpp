#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"First Side    :  ";
    cin>>a;
    int b;
    cout<<"Second  Side  :  ";
    cin>>b;
    int c;
    cout<<"Third Side  :  ";
    cin>>c;

    if ( a>c && a>b){
        cout<<"A is Greatest";
    }

    else if( b>c && b>a){
        cout<<"b is Greatest";
    }
    else {
    cout<< " c is Greatest";}

    }