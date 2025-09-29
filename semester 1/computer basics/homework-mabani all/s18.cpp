#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int a=2 , b=2 , c=2 ;
    for (;a<50;a++)
        {
            for(;b<50;b++)
            {
                for(;c<50;c++)
                {
                    if ((c*c)==(pow(b,2)+(pow(a,2))))
                    {
                        cout << a << " _ " << b << " _ " << c << endl ;
                    }
                }
            c = 1;
            }
        b = 1;
        }
}