#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< " Enter the NUmber  :  ";
    cin>>n;

    int sum=0;
    while( n!=0){
        int ld;
        ld= n%10;
        n=n/10;
        sum+=ld;
    }
    cout<<sum;
}