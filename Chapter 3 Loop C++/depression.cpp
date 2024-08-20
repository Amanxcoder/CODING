#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:  ";
    cin>>n;
    int a;
    a=n;
  int r=0;
  while( n!=0){
    int ld;
    ld=n%10;
    r=r*10;
    r=r+ld;
    n=n/10;
  }
  int sum;
  sum=a+r;
  cout<<sum;
}