#include <iostream>
using namespace std;
int powOne(int a, int b)
{
    if(b == 0)
        return 1;

    int x = powOne(a, b / 2);

    // b & 1 : check b is odd or even. If b & 1 == 1, it's a odd number.
    return b & 1 ? a * x * x : x * x;
}
int powTwo(int a, int b)
{
    if(b == 0)
        return 1;

    int n = 1;
    for( ; b ; b>>=1)
    {
        if(b & 1)
            n = n * a;

        a = a * a;
    }
    return n;
}
int main()
{
    cout<<powTwo(7,3)<<endl;
    return 0;
}
