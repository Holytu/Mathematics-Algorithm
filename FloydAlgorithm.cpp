#include <iostream>

using namespace std;

int main()
{
    int count = 0, x = 1;
    for(int i = 1; i <= 5; i++)
    {
        count = 0;
        while(count < i)
        {
            printf("%d ", x);
            count++;
            x++;
        }
        printf("\n");
        
    }
    return 0;
}
