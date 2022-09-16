// برنامه ای بنویسید که دو عدد از کار بر دریافت کند و 
// مشخص کند که مضربی از یکدیگر هستند یا خیر 

#include <iostream>
using namespace std ; 

int main () 
{
    int a , b ; 
    int z ; 

    cout << "enter one numbe : " << endl ;
    cin >> a ;

    cout << "enter one number  :  "  << endl; 
    cin >> b ; 

    if (a > b ) 
        z = a % b ;

    if (a < b )
        z = b % a ;

    
    if (z == 0 )
        cout << "ba khsh pazir nist !  " ;
    
    if (z !=0 ) 
        cout << "bakhshpazir hast ! " << endl; 
    
}