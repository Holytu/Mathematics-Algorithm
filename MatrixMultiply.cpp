#include <iostream>
using namespace std;

int main()
{
    int a[4][4] = {   {1, 1, 1, 1},
                      {2, 2, 2, 2},
                      {3, 3, 3, 3},
                      {4, 4, 4, 4}
                  };
    int b[4][4] = {   {1, 1, 1, 1},
                      {2, 2, 2, 2},
                      {3, 3, 3, 3},
                      {4, 4, 4, 4}
                  };
    int c[4][4];
    int sum =0, i, j,k;
    /*for( i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = 0;
        }
    }



    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }

    }



    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
