#include <iostream>
#include <math.h>
using namespace std;
int Prime[100]={};
bool CheckPrime(int p)
{
    if( p % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(p); i+=2)/// i < sqrt(p) is wrong
    {
        if( p % i == 0)
            return false;
    }
    return true;
}
void BuildPrimeArray(int n)
{
    int idx = 0;
    int x;

    Prime[idx]=2;
    idx++;
    x = 3;
    while(idx < 100)
    {
        if(CheckPrime(x) == true)
        {
            Prime[idx] = x;
            idx++;
        }
        x++;
    }
}
void PrintArray(int Prime[])
{
    for(int k = 0; k < 100; k++)
    {
        printf("Prime[%d] = %d\n",k,Prime[k]);
    }
}
int FindPrimeIndex(int n)
{
    int k;
    for(k = 0; k < 100; k++)
    {
        if(Prime[k] == n)
        {
            break;
        }
    }
    return k+1;
}
void StrongPrime(int n)
{
    BuildPrimeArray(n);

    if(CheckPrime(n) == true)
    {
        int Nth = FindPrimeIndex(n) - 1;
        int ans = ( Prime[Nth+1] + Prime[Nth-1] ) / 2;

        //printf("Nth = %d, ans = %d\n",Nth, ans);

        if(n > ans)
            cout<<"A strong number\n";
        else
            cout<<"Not a strong number\n";
    }
    else
        cout<<"Not a prime number\n";
}
int main()
{
    StrongPrime(11);
    return 0;
}
