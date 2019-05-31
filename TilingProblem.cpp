#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int Tiling(int n)
{
    if(n == 1 || n == 2)
        return n;
    else
        return Tiling(n - 1) + Tiling(n - 2);
}
int main()
{
    printf("%d\n",Tiling(4));
    return 0;
}
