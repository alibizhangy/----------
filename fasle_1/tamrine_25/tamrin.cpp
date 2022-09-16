// برنامه ای بنویسید که دو عدد از کار بر دریافت کند و عدد بزرگ تر زا همراه 
// پیام "is larger." را چاپ کند 
//اگر هم دو عدد مساوی بون این پیقام را چاپ کند 
// "these number are equal." 

#include <iostream> 
using namespace std ; 

int main () 
{ 
    int number1 , number2 ; 
    cout << "enter two number : " << endl;\

    cout << "enter number1 : " <<endl ;
    cin >> number1 ; 

    cout << "enter number2 : " << endl; 
    cin >> number2 ; 

    if (number1 < number2 ) 
        cout << number2 << " is larger." ; 

    if (number1 > number2 )
        cout << number1 << " is larger. " ; 

    if (number1 == number2 )
        cout << "these number are equal. " ; 


    return 0 ; 
}