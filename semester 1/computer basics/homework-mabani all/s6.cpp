#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    int i=0 ;
    cout << "n\t10*n\t100*n\t1000*n\n";
    while (i<9)
    {
        i++;
        cout << i << "\t" << i*10 << "\t" << i*100 << "\t" << i*1000 << endl ;
    } 
}