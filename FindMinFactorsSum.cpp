#include <iostream>

using namespace std;
int FindMinSum(int n)
{
    int minSum = 1e+10;
    for (int i = 2; i <= n; i++)
    {
        int num =  n / i;
        if( n % i == 0 && (num + i) < minSum)
        {
            minSum = num + i;
        }
    }
    return minSum;
}
int main()
{
    int n = 12;
    cout<<FindMinSum(n)<<endl;
    return 0;
}
