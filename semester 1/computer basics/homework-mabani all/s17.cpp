#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    cout << "pi is : " ;
    double sum=4 , n=3 , b=-1 ;
    for (;n<104;b*=-1)
        {
            sum+=(4/(b*n));
            n+=2;
        }
    cout << sum ;
}