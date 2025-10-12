#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() 
{
    int num , mul , sum=0 ;
    cout << "enter your number : " ;
    cin >> num ;
    cout << "enter your mutiplication : " ;
    cin >> mul ;
    for (int i=0 ; i < num ; i++ )
    {
        sum+=mul;
    }
    cout << "answer = " << sum ;
}