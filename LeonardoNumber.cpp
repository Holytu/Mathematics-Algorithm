#include <iostream>

using namespace std;
int LeonardoNumber(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return LeonardoNumber(n - 1) + LeonardoNumber(n - 2) + 1;
    }
}
int main()
{
    int n = 13;
    cout<<LeonardoNumber(n)<<"\n";
    return 0;
}
