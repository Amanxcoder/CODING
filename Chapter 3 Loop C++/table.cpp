#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter the NUmberr  :  ";
    cin>>n;

    // for ( int i=n; i<= 10*n; i+=n )
    //    if(i%n==0){
    //     cout<<i<<"  "<<endl;

    //    }
    for ( int i=n; i<= 10*n; i++ )
         if(i%n==0){
        cout<<i<<"  "<<endl;

       }
}
