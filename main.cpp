#include <iostream>
#include "first.h"

using namespace std;

int main()
{
    /*
    We can use static_cast<> to convert an integer to a floating point number 
    so that we can do floating point division instead of integer division. 
    */
    char znak{'a'};
    cout << znak << '\n';
    cout << static_cast<int>(znak) << '\n';
    int a{7};
    int b{3};
    cout << static_cast<double>(b) / a << '\n';

    /*
    Trying to divide by 0 (or 0.0) will generally cause your program to crash, as 
    the results are mathematically undefined!
    */
    cout << "Enter a divisor: ";
    int x{};
    cin >> x;

    cout << "12 / " << x << " = " << 12 / x << '\n'; //If you run the above program and enter 0, 
                                                    //your program will either crash or terminate abnormally. 


    

    return 0;
}