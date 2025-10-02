#include <iostream>
using namespace std;
bool aval_chek(int num)
{
if (num <= 1) 
    {
        return false;
    }
for (int i = 2; i * i <= num; i++) 
    {
    if (num % i == 0) 
        {
        return false;
        }
    }
    return true;
}

int main()
{
int n ;
cout << "enter eyour number : " << endl;
cin >> n ;
for (int i = 2; i < n; i++) 
{
if (aval_chek(i)) 
    {
        cout << i << "\n";
    }
}
cout << endl;
return 0;
}