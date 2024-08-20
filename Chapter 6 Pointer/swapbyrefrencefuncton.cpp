#include <iostream>
using namespace std ;
int swap( int* a, int* b){
    int temp =*a;
     *a=*b;
    *b=temp;
}
 int maim(){

    int x=12;
    int y=13;
    cout<<x <<" "<<y ;
    swap( &x,&y );

    cout<<x<<" "<<y;
 }