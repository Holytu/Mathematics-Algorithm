#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int SumOfFactors(int n)
{
    int sum = 0;

    if( n % 2 != 0)
        return 0;

    for( int i = 2; i <= n; i++)
    {

        if( n % i == 0 && i % 2 == 0)
        {
            cout<<"i = "<<i<<endl;
            sum = sum + i;
        }
    }

    return sum;
}
int main()
{
    int n = 18;
    cout<<SumOfFactors(n)<<endl;
    return 0;
}
