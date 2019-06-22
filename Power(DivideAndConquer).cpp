#include <iostream>
using namespace std;
int pow(int a, int b)
{
    if(b == 1)
        return a;

    int x = pow(a, b / 2);

    // b & 1 : check b is odd or even. If b & 1 == 1, it's a odd number.
    return b & 1 ? a * x * x : x * x;
}
int main()
{
    cout<<pow(7,3)<<endl;
    return 0;
}