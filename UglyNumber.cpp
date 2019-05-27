#include <iostream>

using namespace std;

int getNthUglyNumber(int no)
{
    unsigned num, i = 2;
    no--;
    while(no > 0)
    {
        num = i;
        if(num % 2 == 0)
        {
            while(num % 2 == 0)
            {
                num = num / 2;
            }
        }
        
        if(num % 3 == 0)
        {
            while(num % 3 == 0)
            {
                num = num / 3;
            }
        }
        
        if(num % 5 == 0)
        {
            while (num % 5 == 0)
            {
                num = num / 5;
            }
        }
        
        if(num == 1)
        {
            no--;
            //cout<<"i = "<<i<<", no = "<<no<<endl;
        }
        
        if(no == 0)
        {
            i--;
        }
        
        i++;
        
        
        //cout<<"i = "<<i<<endl;
    }
    return i;
}
int main()
{
    unsigned no = getNthUglyNumber(7);
    cout<<no<<endl;
    return 0;
}
