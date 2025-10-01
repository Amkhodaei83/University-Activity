#include <iostream>
using namespace std;
int gcd(int a, int b) 
{
    if (b == 0)
    {        
        return a;
    } 
    else 
    {        
        return gcd(b , a % b);
    }
}
int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int number1 , number2 , i , temp , sum=0 ;
    cout << "enter your number 1 :" ;
    cin >> number1 ;
    cout << "enter your number 2 :" ;
    cin >> number2 ;
    cout<< lcm(number1, number2) ;
}