#include <iostream>

using namespace std;
int LucasNumber(int n)
{
   if( n == 1)
        return 1;
   else if(n == 2)
        return 2;
   else
        return LucasNumber(n-1) + LucasNumber(n-2);
}
int main(void)
{
    for (int i = 1; i <= 8; i++)
        printf("%d th : %d\n",i,LucasNumber(i));
    return 0;
}
