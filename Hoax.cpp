#include <iostream>
#include <math.h>
#include <queue>
#include <vector>
using namespace std;
vector<int> primeFactors(int n)
{
    vector<int> q;
    if( n % 2 == 0)
    {
        while( n % 2 == 0)
        {
            //cout<<" 2 ";
            n = n / 2;
        }
        q.push_back(2);
    }
    
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if( n % i == 0)
        {
            while( n % i == 0)
            {
                //cout<< i <<" ";
                n = n / i;
            }
            q.push_back(i);
        }
    }
    
    if(n > 2 )
    {
       // cout<< n<<"\n";
        q.push_back(n);
    }
    
    return q;
}
bool isHoax(int n)
{
    vector<int> res = primeFactors(n);
    int sum = 0;
    
    if(res[0] == n)
        return false;
    
    for (int i = 0; i < res.size(); i++)
    {
        if(res[i] / 10 == 0)
        {
            sum = sum + res[i];
        }
        else
        {
            while(res[i] > 0)
            {
                sum = sum + res[i] % 10;
                res[i] = res[i] - res[i] % 10;
                res[i] = res[i] / 10;
            }
            
        }
    }
    int digit_sum = 0;
    while( n > 0)
    {
        digit_sum = digit_sum + n % 10;
        n = (n - n % 10) / 10;
    }
    
    cout<<"Digit_num = "<<digit_sum<<endl;
    
    cout<<"sum = "<<sum<<endl;
    
    return (digit_sum == sum);
    
}
int main()
{
    int n = 84;
    cout<<isHoax(n)<<endl;
    
    return 0;
}
