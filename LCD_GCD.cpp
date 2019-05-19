#include <iostream>

using namespace std;
int GCD(int a, int b)
{
    if(b > a && a != 0)
        return GCD(b, a);
    else if(a >= b && b != 0)
        return GCD(b, a%b);
    else
        return a;
}
int LCD(int a, int b)
{
    return a * b / GCD(a, b);
}
int main()
{
    cout<< LCD(12,24);
    return 0;
}