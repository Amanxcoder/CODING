#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter The Number:  ";
    cin>>n;

    int  product = 1;
    while(n!=0){
        int ld= n%10;
        product*=ld;
        n=n/10;
       
    }
    cout<<product;
   
   

    
    
}