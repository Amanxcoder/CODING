#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number  :  ";
    cin>>n;

    //4  8 16 32 64..........
    int a=4;
    for( int i=1; i<=n; i++){
        cout<<a<<"  ";
        a= a*2;

    }



}