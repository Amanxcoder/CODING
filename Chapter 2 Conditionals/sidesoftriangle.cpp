#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"First Side OF Triangle   :  ";
    cin>>a;
    int b;
    cout<<"Second  Side OF Triangle  :  ";
    cin>>b;
    int c;
    cout<<"Third Side OF Triangle  :  ";
    cin>>c;

    if ( a+b>c && b+c>a && c+a>b){
        cout<<"Valid Traingle";
    }
    else {
        cout<< "Invalid Traingle ";
    }
}