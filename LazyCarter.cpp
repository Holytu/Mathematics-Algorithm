#include <iostream>

using namespace std;

int LazyCater1(int n)
{
    if(n == 1)
        return 2;
    else
        return n + LazyCater1(n-1);
}
int LazyCater2(int n)
{
    return (n + 1) * n / 2 + 1;
}
int main()
{
    printf("%d\n",LazyCater1(50));

    printf("%d\n",LazyCater2(3));
    return 0;
}
