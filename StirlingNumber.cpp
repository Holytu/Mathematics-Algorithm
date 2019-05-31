#include <iostream>
#include <math.h>

using namespace std;
long int stirlingFactorial(int n)
{
    if(n == 1)
        return 1;

    long int sum = sqrt(2 *  3.14 * n) * pow((n/2.71),n);

    return sum;
}
int main()
{
    cout<<stirlingFactorial(6)<<"\n";

    return 0;
}
