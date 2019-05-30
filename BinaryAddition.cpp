#include <iostream>
#include <limits>
using namespace std;
void Initialize(int* x, int* y, int* c_out)
{
    for (int i = 0 ; i < 10; i++)
    {
        x[i] = 0;
        y[i] = 0;
    }
    for (int i = 0; i  < 11; i++)
    {
        c_out[i] = 0;
    }
}
int main()
{
    //int x[10], y[10];
    int c_out[10];

    //Initialize(x, y, c_out);

    int x[10] = {0,1,1,0,1,1,0,0,1,0};
    int y[10] = {0,0,0,1,0,0,1,1,1,1};

    int i, j = 9;
    for (i = 0; i  < 10; i++)
    {
        c_out[i] = 0;
    }
    i = 9;
    while(i >= 0)
    {
        if(x[i] && y[i])// x = 1, y = 1
        {
            if(c_out[i] == 1)
            {
                c_out[i] = 1;
                c_out[i-1] = 1;
            }
            else
            {
                c_out[i] = 0;
                c_out[i-1] = 1;
            }
        }
        else if(x[i] || y[i])// x = 1, y = 0 OR x = 0, y = 1
        {
            if(c_out[i] == 1)
            {
                c_out[i] = 0;
                c_out[i-1] = 1;
            }
            else
            {
                c_out[i] = 1;
                c_out[i-1] = 0;
            }
        }
        else // x = 0, y = 0
        {
            if(c_out[i] == 1)
            {
                c_out[i] = 1;
            }
            else
            {
                c_out[i] = 0;
            }
        }
        i--;
    }
    for (i = 0 ; i < 10; i++)
        printf("%d ",c_out[i]);


    return 0;
}
