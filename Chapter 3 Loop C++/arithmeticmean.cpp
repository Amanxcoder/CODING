#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n  :  ";
    cin>>n;
    // 4 7 10 13 .......
    // for ( int i=4; i<=3*n+1; i+=3)     // arithmetic formula an= a+(n-1)*d
    // cout<<i<<"  ";


   // 2nd Method
    ///4 7 10 13 

    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<"  ";
        a = a+3;
    }
}