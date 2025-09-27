#include <iostream>
using namespace std;
int prime(int num )
{
    int i=1 ;
    for (i=1 ; i<num ; i++)
    {
        if ((num%i)==0)
        {
            return(1);
        }
    }
    cout << "its prime " << i << endl ;
}

int main()
{
    int number  ;
    cout << "enter your number :" ;
    cin >> number ;
    for(int i=1 ; i <=number ; i++ )
    {
    prime(i) ;
    cout << i ;
    }
}