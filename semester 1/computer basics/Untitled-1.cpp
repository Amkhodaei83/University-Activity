#include <iostream>
int main ()
{
    int b = 1 ;
    int a = 2 ;
    int stack = a ;
    a = b ;
    b = stack ;
    std::cout << a ;
}
