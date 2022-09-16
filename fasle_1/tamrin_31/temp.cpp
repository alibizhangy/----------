// برنامه ای بنویسید که یک عدد از کاربر دریاف کند 
// و مشخص کند که عدد زوج است یا این که فرد یعد نتیجه را اعلام کند 



#include <iostream>
using namespace std ; 

int main () 
{
    int a , b ; 
    cout << "enter the one number : " << endl; 
    cin >> a ; 

    b = a % 2 ; 
    if (b == 0 ) 
        cout << "your number is even ********" << endl ;
    if (b != 0 ) 
        cout << "your number is odd "<< endl ; 
    return 0 ;
}