#include <iostream
using namespace std ;
int swap( int x, int y){
    int temp =x;
     x=y;
    y=temp;
}
 int maim(){

    int x=12;
    int y=13;
    cout<<x <<" "<<y ;
    swap( x,y );

    cout<<x<<" "<<y;
 }