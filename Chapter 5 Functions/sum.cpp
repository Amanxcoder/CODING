// #include<iostream>
// using namespace std;
// void sum( int a, int b){
//     cout<<a+b;
// }
// int main(){
//     int a;
//     cout<<"enter a";
//     cin>>a;
//     int b;
//      cout<<"enter b";
//      cin>>b;
//     sum(a,b);
// }


#include<iostream>
using namespace std;
int sum( int a, int b){
     return a+b;
}
int main(){
    int a;
    cout<<"enter a";
    cin>>a;
    int b;
     cout<<"enter b";
     cin>>b;
     cout<<sum(a,b);
}