#include <iostream>
using namespace std ; 

int main () 
{
    int a , b , c , d , e ; 
    int largest , smallest ;
    smallest = 0  ;
    largest = 0 ; 
    cout << "enter 5 number : " << endl; 
    cin >> a >> b >> c >>  d >> e ; 

    if ( a < b ) 
        largest = b ; 
    if (a >= b )
        largest = a ;
    if (largest < c ) 
        largest  = c ; 
    if (largest < d )
        largest = d ; 
    if (largest < e ) 
        largest = e  ;
    cout << "your largest number is :  " << largest << endl; 

     if ( a < b ) 
        largest = a ;
    if (a >= b )
        largest = b ; 
    if (largest > c ) 
        largest  = c ;
    if (largest > d )
        largest = d;
    if (largest > e ) 
        largest = e   ;

    cout << "smallest number is : " << largest << endl; 
    return 0 ;
}