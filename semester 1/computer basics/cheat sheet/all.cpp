#include <iostream>
#include <cmath>
#include <string>
#include <stdlib.h> // rand & srand   (Srand() % ( maximum - minimum + 1 )) + minimum
using namespace std;
int x=3;
/*
int amozesh ()
{
             int max = 2147483647
             int min = -2147483647
            (shart)?(true):(false)
while(i<0) ///halghe vaile 
    {
        //your code
    }
        for(int i = 0 ; i<0 ; i++ ) // halghe for 
        {
            if (i==0)
            {
            //code
            break //in halghe ro kamel mishkane 
                switch (character)  // halghe switch
                {
                    case 'A':
                    {
                    //code 
                    }
                    break;
                    case 'B' :
                    {
                    //CODE
                    }
                    break; ;
                    default:
                    //in code baraye halatie ke to shart ha nist
                    break;
                continue // in ye halghe mire bala tar
                }
            }
        }
} */
int tartib( int &a ,int &b , int &c)
{
    if (c>a)
        {
            a=a+c;
            c=a-c;
            a=a-c;
        }
    if (a<b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
            
        }
    else if (b<c)
        {
            b=b+c;
            c=b-c;
            b=b-c;
        }
}
int find_second_first () //infinite
{
    int point , n , second=0 , first=0 ; 
    cout << "enter nuber of student : " ;
    cin >> n ;
    for (int i=0 ; i<n ;i++ )
    {
        cout << "enter avrage point : " ;
        cin >> point ;
        if (point>first)
            {
                second=first;
                first=point;
                
            }
        else if (point>second)
            {
                second=point;
            }
    }
    cout << "max is : " << first << endl << "second is : " << second << endl ;
}
int morabaei()
{
    int i=0,space=0 , num ;
    cout << "enter the squar side : " ;
    cin >> num ;
    while (i < num)
    {
        i++ ;
        cout << "*" ;
    }
    cout << endl ;
    i=0;
    while (i<num)
    {
        i++;
        cout << "*" ;
        while (space<(num-2))
        {
            space++;
            cout << " ";
        }
        
        space=0;
        cout << "*\n";
    }
    i=0;
    while (i < num)
    {
        i++ ;
        cout << "*" ;
    }
}
int rev_chek()
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

int facturiel()
{
    double num ,temp ;
    cout << "enter your number : ";
    cin >> num ;
    for (temp=1;num>0;num--)
    {
        temp*=num;
    }
    cout << temp ; 
}
int fibunachi()
{
    double a=1,b=1,c;
    cout << "0" << endl << a << endl << b << endl ;
    for (int i=3;i<50;i++)
    {
        c=a+b ;
        cout << c << endl;
        a=b , b=c ;
    }
}
int mosalas()
{
    int num , inc=1 ,dec , i ;
    cout << "enter your number : " ;
    cin >> num ;
    dec=num ;
    for ( ; inc<=num ; inc++ , dec-- )
        {
            for( i= 0 ; i<inc ; i++ )
            {
                cout << "*" ;
            }
            for(i=1 ; i<dec ; i++ )
            {
                cout << " ";
            }
        cout << "\t" ;
            for(i=0 ; i<dec ; i++ )
            {
                cout << "*";
            }
            for( i= 1 ; i<inc ; i++ )
            {
                cout << " " ;
            }
        cout << "\t" ;
            for( i= 1 ; i<inc ; i++ )
            {
                cout << " " ;
            }
            for(i=0 ; i<dec ; i++ )
            {
                cout << "*";
            }
        cout << "\t" ;
            for(i=1 ; i<dec ; i++ )
            {
                cout << " ";
            }
            for( i= 0 ; i<inc ; i++ )
            {
                cout << "*" ;
            }
        cout << endl ;
        }

}
int mosalas2()
{
    int num , i=0 , j , counter ;
    cout << "enter your number : " ;
    cin >> num ;
    j=(num-1);
    for (;i<num;)
        {
            for (counter = 0 ; counter < j ; counter++ )
            {
                cout << " ";
            }
            for (counter = 0;counter <= i;counter++)
            {
                cout << "* " ;
            }
        cout << endl ;
        j-- ;
        i++ ;
        }
        j=(num-1);
        i=0 ;
    for (;i<num;)
        {
            for (counter = (num-1) ; counter > j ; counter-- )
            {
                cout << " ";
            }
            for (counter = num ;counter > i;counter--)
            {
                cout << "* " ;
            }
        cout << endl ;
        j-- ;
        i++ ;
        }

}
int lozy()
{
        int num , i=0 , j , counter ;
    cout << "enter your number : " ;
    cin >> num ;
    j=(num-1);
    for (;i<num;)
        {
            for (counter = 0 ; counter < j ; counter++ )
            {
                cout << " ";
            }
            for (counter = 0;counter <= i;counter++)
            {
                cout << "*" ;
            }
            for (counter = 0;counter <= (i-1);counter++)
            {
                cout << "*" ;
            }
        cout << endl ;
        j-- ;
        i++ ;
        }
    i=1;
    j=num;
    for (;i<num;)
        {
            for (counter = 0 ; counter < i ; counter++ )
            {
                cout << " ";
            }
            for (counter = 0;counter < (j-1);counter++)
            {
                cout << "*" ;
            }
            for (counter = 0;counter < (j-2);counter++)
            {
                cout << "*" ;
            }
            
        cout << endl ;
        j-- ;
        i++ ;
        }
}
long int power2 (int x) 
{ 
    long int y; 
    y=x*x; 
    return y; 
} 
int maximum (int x,int y, int z) 
{ 
    int max=x; 
    if (y>max) 
    max=y; 
    if (z>max) 
    max=z; 
    return max; 
} 
int pow(int &num , int b)
{
    int temp=num ;
    for (int i=1;i<b;i++)
    {
        num*=temp;
    }
}
bool perfect (int num)
{
    int i , sum=0 ;
    for (i=0;i<=(num/2);i++)
    {
        if ((num%i)==0)
        {
            sum+=i;
        }
    }
    if (sum==num)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}
int prime(int num )
{
    int i ;
    for (i=2 ; i<=(num/2) ; i++)
    {
        if ((num%i)==0)
        {
            cout << "its not prime " ;
        }
    }
    cout << "its prime " ;
}
int maban2__10()
{
    int num , count=1 , mod , dah=0  ;
    cout << "enter your number : " ;
    cin >> num ;
    while (num!=0)
    {
        mod=num%10;
        num/=10;
        dah+=mod*count ;
        count*=2 ;
    }
    cout << "the final answer : "<< dah ;
}
int mabna10_2(int num )
{
    int dou=0 , i=1 ;
    for (;num!=0;num/=2)
    {
        dou=dou+(num%2)*i ;
        i*=10;
    }
}
int kmm(int a, int b)
{
    int lcm = 0;

    if (a == 0 || b == 0) 
    {
        lcm = 0;
    }
     else 
    {
        if (a == b) 
        {
            lcm = a;
        } 
        else if (a < b) 
        {
            if (b % a == 0) 
            {
                lcm = b;
            } 
            else 
            {
                int factor = 2;

                bool foundlcm = false;
                while (!foundlcm) 
                {
                    int multiple = factor*b;
                    if (multiple%a==0) 
                    {
                        lcm = multiple;
                        foundlcm = true;
                    }
                    factor++;
                }
            }

        } 
        else if (a > b) 
        {
            if (a % b == 0) 
            {
                lcm = a;
            }
            else
            {
                int factor = 2;

                bool foundlcm = false;
                while (!foundlcm) 
                {
                    int multiple = factor*a;
                    if (multiple%b==0) 
                    {
                        lcm = multiple;
                        foundlcm = true;
                    }
                    factor++;
                }
            }
        }

    }
    return lcm;
}
int bmm(int a, int b) 
{
    int gcd = 0;
    if (a == 0 || b == 0) 
    {
        gcd = 0;
    }
    else {
        if (a > b) 
        {
            for (int i = b; i > 0; i--) 
            {
                if (a % i == 0 && b % i == 0) 
                {
                    gcd = i;
                    break;
                }
 
            }
        } 
        else if (a < b) 
        {
            for (int i = a; i > 0; i--) 
            {
                if (a % i == 0 && b % i == 0) 
                {
                    gcd = i;
                    break;
                }
 
            }
        } 
        else  // a == b 
        {
            gcd = a;
        }
    }
    return gcd;
}
void bubbleSort(int array[], int n) 
{
    int hold ;
  // loop to access each array element
  for (int i = 0; i < n - 1; i++)
    // loop to compare array elements
    for (int j = 0; j < n - i - 1; j++)
    {
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[ j ] > array[j + 1])
      {
        // swapping elements if elements
        // are not in the intended order
        hold = array[ j ];
        array[ j ] = array[ j + 1 ]; 
        array[ j + 1 ] = hold; 
      }
    }
}
int linearSearch( const int array[] , int key , int sizeOfArray ) 
{ 
    for ( int j = 0; j < sizeOfArray; j++ ) 
    if ( array[ j ] == key ) 
        return j; 
    return -1; 
} 
int main ()
{
    int num[10] ;
    cout << num [5] ;
}