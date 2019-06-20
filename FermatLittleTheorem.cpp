#include <iostream>
#include <math.h>
using namespace std;
int GCD(int x, int y)
{
    if(x > y && y != 0)
        return GCD(y, x%y);
    if(y == 0)
        return x;
}
int Poly(int a, int p)
{
    int i = 1;
    while(i < p)
    {
        a = a * a;
        i++;
    }
    return a;
}
bool FermatLittleTheorem(int a, int p)
{
    int ans;
    if( GCD(a, p) == 1)
    {
        ans = Poly(a,p);
        ans = ans % p;
        if(ans == 1)
            return true;
    }

    return false;

}

int main()
{
    int a,p;
    cin >> a >> p;
    cout<<FermatLittleTheorem(a, p);

    return 0;
}
