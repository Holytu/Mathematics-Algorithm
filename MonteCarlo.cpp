#include <iostream>
#include <time.h>
#include <ctime>
#define INTERVAL 10000
using namespace std;
int main()
{
    double random_x , random_y;
    double Origin_distance;
    double pi;
    int circle_point = 0, square_point = 0;

    srand(time(NULL));

    for(int i = 0; i < (INTERVAL * INTERVAL); i++)
    {
        random_x = double(rand() % (INTERVAL) + 1) / INTERVAL;
        random_y = double(rand() % (INTERVAL) + 1) / INTERVAL;

        Origin_distance = random_x * random_x + random_y * random_y;

        if(Origin_distance <= 1)
            circle_point++;

        square_point++;

        pi = double(4 * circle_point) / square_point;
    }
    cout<<pi<<"\n";

    return 0;
}
