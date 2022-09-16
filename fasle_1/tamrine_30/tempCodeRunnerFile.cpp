#include <iostream>
using namespace std ; 

int main () 
{
    int a , b , c , d , e ; 
    int largest , smallest ; 
    cout << "enter 5 number : " << endl; 
    cin >> a >> b >> c >>  d >> e ; 

    if ( a < b ) 
        largest = b ; 
    if (largest < c ) 
        largest  = c ; 
    if (largest < c ) 
        largest = c ; 
    if (largest < d )
        largest = d ; 
    if (largest < e ) 
        largest = e  ;
    cout << "your largest number is :  " << largest << endl; 

     if ( a < b ) 
        largest = a ; 
    if (largest < c ) 
        largest  = largest ; 
    if (largest < c ) 
        largest = largest ; 
    if (largest < d )
        largest = largest;
    if (largest < e ) 
        largest = largest   ;

    cout << "smallest number is : " << largest << endl; 
    return 0 ;
}