#include <iostream>

using namespace std;

int main()
{
    int ROW = 4, COL = 5;
    int i, j;
    int transpose_a[COL][ROW] = {};

    int a[ROW][COL] =
                  {
                      {1, 1, 1, 1, 1},
                      {2, 2, 2, 2, 2},
                      {3, 3, 3, 3, 3},
                      {4, 4, 4, 4, 4}
                  };





    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            transpose_a[j][i] = a[i][j];
        }
    }

    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW; j++)
        {
            printf("%d ", transpose_a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
