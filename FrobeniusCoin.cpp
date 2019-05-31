#include <iostream>

using namespace std;
int GCD(int a, int b)
{
    if(b > a)
        return GCD(b,a);

    if(b == 0)
        return a;
    else
        return GCD(b,a%b);
}
void forbenius(int x, int y)
{
    if( GCD(x, y) == 1)
    {
        int LargeAmount, TotalAmount;
        LargeAmount = ( x * y ) - ( x + y);
        TotalAmount = ( x - 1 ) * ( y - 1) / 2;
        printf("Large Amount = %d\nTotal Amount = %d\n",LargeAmount, TotalAmount);
    }
    else
    {
        printf("NA\n");
    }
}
int main(void)
{
    int X = 2, Y = 5;
    forbenius(X,Y);

    printf("\n");
    X = 5, Y = 10;
    forbenius(X, Y);

    return 0;
}
