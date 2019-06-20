#include <iostream>

using namespace std;
int factorial(int x)
{
    if(x > 1)
        return x * factorial(x-1);
    else
        return 1;
}
void WilsonThereom(int p)
{
    int x = factorial(p-1);
    x = x % p;
    if(x == (p-1))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
}
int main()
{
    WilsonThereom(7);
    return 0;
}
