     #include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter n :  ";
   cin>>n;
  int r;
   cout<<"Enter n :  ";
   cin>>r;
 int a =1;
 for ( int i=1; i<=n; i++){
    a= a*i;
 }
  int  b=1;
 for ( int i=1; i<=r; i++){
    b= b*i;
 }
  int c =1;
 for ( int i=1; i<=n-r; i++){
    c= c*i;
 }
  cout<<a/(b*c);
   
   
} 