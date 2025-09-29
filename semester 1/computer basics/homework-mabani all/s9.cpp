#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/*
int main() 
{
    int num , n ;
    bool answer=false ;
    cout << "enter your number : " ;
    cin >> num ;
    if (num<0)
        {
            num*=-1;
        }
    if (num <= 100 )
        {
            if ((num%10)==(num/10))
            {
                answer = true ;
            }
        }
    if (num <= 1000 )
        {
            if ((num%10)==(num/100))
            {
                answer = true ;
            }
        }
    if (num <= 10000 )
        {
            if (((num%10)==(num/1000))&&(((num%100)/10)==((num/100)%10)))
            {
                answer = true ;
            }
        }
    if (num <= 100000 )
        {
            if (((num%10)==(num/10000))&&(((num%100)/10)==((num/1000)%10)))
            {
                answer = true ;
            }
        }
    cout << answer ;
}
*/
int main ()
{
    int num , temp , rev=0 ;
    cout << "enter your number : " ;
    cin >> num ;
    temp = num ;
    for (; temp > 0 ; temp/= 10 , rev*=10 )
    {
        rev+=(temp%10);
    }
    rev/=10 ;
    if (rev==num)
    {
        cout << "its ok " ;
    }
    else 
    {
        cout << "its not ok " ;
    }
}