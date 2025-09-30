#include <iostream>
using namespace std;
int main()
{
    int number , i , temp , sum=0 ;
    cout << "enter your number :" ;
    cin >> number ;
    temp=number ;
    for (;temp!=0;temp/=10)
    {
        sum+=temp%10;
    }
    if ((number%sum)==0)
        {
            cout << "ITS OK" << endl ;
        }
    else if ((number%sum)!=0)
    {
        cout << "ITS NOT OK" << endl ;
    }
}