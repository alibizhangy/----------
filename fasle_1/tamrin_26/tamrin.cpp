// دو عدد از کار بر بخواهید و این دو عدد را دریافت کنید 
// حاصل جمع میانگین ضرب کوچک ترین بزرگ ترین 
// enter three difrend intiger number : 
#include <iostream > 
using namespace std ; 

int main () 
{
    // decleration three number for process 
    int number_1 , number_2 , number_3 ; 
    int sum ; // for sum 
    int avrage ; // for avrage 
    int product ; // for product 
    int largest ; // for if process
    int smallest ;  
    cout << "enter three integer number : " << endl; 
    cout << "enter number one : " ; 
    cin >> number_1 ; 
    
    cout<< "number two : " ; 
    cin >> number_2 ; 
    
    cout << "number three : " ; 
    cin >> number_3 ; 

    sum = number_1 + number_2 + number_3 ;
    cout << "sum is : " << sum ; 
    cout << "\n" ; 

    avrage = sum / 3 ; 
    
    cout << "avrage is : " << avrage ;
    cout << "\n" ; 

    product = number_1 * number_2 * number_3 ; 
    cout << "product is : " << product ; 
    cout << endl ;

    if (number_1 > number_2 ) 
        smallest = number_2 ; 
    if (number_2 > number_1) 
        smallest = number_1 ;
    if (smallest > number_3) 
        smallest = number_3; 
    if (number_3 > largest ) 
        smallest = largest ;

    cout << "smallest is : " << smallest ;
    cout << endl ; 

    if (number_1 < number_2 ) 
        largest = number_2 ; 
    if (number_2 < number_1) 
        largest = number_1 ;
    if (largest < number_3) 
        largest = number_3; 
    if (number_3 < largest ) 
        largest = largest ;
    
    cout << "largest is : " << largest ; 

    


        const

    return 0 ; 
}