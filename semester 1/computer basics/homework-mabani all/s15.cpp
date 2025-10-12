#include <iostream>
#include <cmath>
#include <string>
using namespace std;
main()
{
    double num ,temp ;
    cout << "enter your number : ";
    cin >> num ;
    for (temp=1;num>0;num--)
    {
        temp*=num;
    }
    cout << temp ; 
    double sum=1 ;
    temp=1 ;
    for (num=0;num<10;num++)
    {
        for (int i = 0 ;i>num;i++)
        {
            temp*=num;
        }
    sum+=(1/(temp));
    temp++;
    }
    cout << "e = " << sum << endl;
    int x , i ; 
    cout << "enter the x : " ;
    cin >> x ;
    sum=1;
    temp=1 ;
    int mul = x ;
    for (num=0;num<10;num++)
    {
        for ( i = 0 ;i>num;i++)
        {
            temp*=num;
        }
        for (mul=x, i = 0 ; i>x ;i++)
        {
            mul*=x;
        }
    sum+=(mul/(temp));
    temp++;
    }
    cout << "e = " << sum << endl;

}