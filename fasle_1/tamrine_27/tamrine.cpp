// یه داده از کاربر دریافت کنید به عنوان شعاع یک دایره 
// در مرحله بعدی یه سری محاسبان انجام دهید که 
// قطر مساحت محیط این دایره حساب بشه 
// عدد  p = 3.14159
// از اعداد صحیح میتونید استفاده کنید 
#include <iostream>
#include <math.h> 
using namespace std ; 

int main () 
{
    int rediuse ; 
    int enviroment , area , circle_diameter ; 
    int p = 3.14159 ; 
    int a ; // take a memory for calculating 
    
    cout << "enter the rediuse : " ; 
    cin >> rediuse ; 
    cout << endl ;

    // calculation 

    cout << "rediuse is : " << rediuse ; 
    cout << " your calculate with your rediuse is : " << endl; 

    cout << "circle diameter is : " << (2*rediuse) << endl ; 

    cout << "circle environment is : " << ((2*rediuse)*p) << endl ;
     
    cout << "circle area is : " << ((rediuse * rediuse) * p ) << endl ; 

    cout << "is beter and estandard is it program : " << endl; 

    a = rediuse * rediuse ; 
    cout << "rediuse * rediuse is : " << a ; 
    cout << endl; 

    a = a * p ; 
    cout << "a = a * p :" << endl; 
    cout << "your area is : " << a ;
    cout << endl; 

    a = rediuse * rediuse * p ;
    cout << "your area is : " << a ; 
    cout << endl; 

    int b ; 

    a = rediuse * rediuse ; 
    b = a * p ; 
    cout << "your area is : " << b << endl; 

    a = rediuse^2 ; 
    a = a * p ; 
    b = a * p ; 

    cout << "circle arae is : " << endl ;
    cout << " a is : " << a << endl; 
    cout << "b is : " << b << endl ;
    // این دیگه خیلی مسخره بود اخه این جا چرا عملگر توان کار نمی کنه اخه 



    
    system("pause"); 
    return 0  ;
}