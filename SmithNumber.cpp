#include <iostream>
#include <math.h>

using namespace std;
int sumOfdigits(int n)
{
    int element = n;
    int sum = 0;

    while(element > 0)
    {
        sum = sum + element % 10;
        element = element / 10;
    }
    return  sum;
}
bool isSmith(int n)
{
    int sum, primeFactorSum = 0, element = n;

    sum = sumOfdigits(n);

    for (int i = 2; i < n ; i++)
    {
        if( element % i == 0 )
        {
            while(element % i == 0)
            {
                //cout<<"i = "<<i<<"\n";

                if(i < 10 )
                {
                    primeFactorSum = primeFactorSum + i;
                }
                else
                {
                    primeFactorSum = primeFactorSum + sumOfdigits(i);
                }
                element = element / i;
            }
        }
    }
    //cout<<"Sum of prime Factors digit\n";
    //printf("Sum = %d, primeFactorSum = %d\n", sum, primeFactorSum);

    return (sum == primeFactorSum);
}
int main()
{
    int n = 666;

    cout<<isSmith(n)<<"\n";
    return 0;
}
