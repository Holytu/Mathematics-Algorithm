#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if(b != 0)
        return GCD(b, a%b);
    else
        return a;
}
void SexyPrime(int x, int y)
{
    //cout<<"x = "<<x<<", y = "<<y<<", GCD = "<<GCD(x,y)<<endl;
    if(GCD(x,y) == 1)
    {
        cout<<"Sexy Prime\n";
    }
    else
    {
        cout<<"None\n";
    }
}
int main()
{
    for (int i = 5; i < 20; i++)
    {
        cout<<"i = "<<i<<endl;
        SexyPrime(i,i+6);
    }
    return 0;
}
