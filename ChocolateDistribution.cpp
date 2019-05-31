#include <iostream>

using namespace std;
void Swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int findMinDiff(int arr[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                Swap(&arr[i],&arr[j]);
            }
        }
    }

    int MinDiff = 1000000, MinIndex = 0;

    for (int i = 0 ; i < n && (i+6) < n; i++)
    {
        if( MinDiff > arr[i+6]- arr[i])
        {
            MinIndex = i;
            MinDiff = arr[i+6] - arr[i];
        }
    }

    return arr[MinIndex + m - 1] - arr[MinIndex];
}
int main()
{
    int arr[] = {12, 4, 7, 9, 2, 23, 25, 41,
                 30, 40, 28, 42, 30, 44, 48,
                 43, 50};
    int m = 7;  // Number of students
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n",findMinDiff(arr,n,m));

    return 0;
}
