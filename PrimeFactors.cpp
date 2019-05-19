#include <iostream>
#include <math.h>
using namespace std;
void primeFactors(int n)
{
    while( n % 2 == 0)
    {
        cout<<" 2 ";
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        //printf("i = %d, n = %d\n",i,n );
        while( n % i == 0)
        {
            cout<< i <<" ";
            n = n / i;
        }
    }

    if(n > 2)
        cout<< n<<"\n";
    
}
int main()
{
    int n = 315;
    primeFactors(n);

    return 0;
}