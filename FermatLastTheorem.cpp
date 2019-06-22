#include <iostream>
#include <math.h>
using namespace std;
void testSomeNumber(int upperNum, int n)
{
    if(n < 3)
        cout<<"None\n";

    int c_pow, num;
    double c;

    for ( int a = 1; a <= upperNum; a++)
    {
        for( int b = a; b <= upperNum; b++)
        {
            c_pow = pow(a, n) + pow(b, n);
            c = pow(c_pow, 1.0 / n);
            num = pow( (int) c, n);

            if( c_pow == num )
            {
                cout<<"c_pow = "<<c_pow<<endl;
            }
        }
    }
    cout<<"No answer"<<endl;
}
int main()
{
    testSomeNumber(10,3);
    return 0;
}