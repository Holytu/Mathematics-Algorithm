#include <iostream>

using namespace std;
float sqroot(float S)
{
    float P,A,d, N = 1;
    while((N*N) < S)
    {
        N++;
    }
    N--;

    d = S - N*N;
    P = d / (2*N);
    A = N + P;

    return A - ( (P*P) / (2*A));

}
int main()
{
    cout<<sqroot(9.2345)<<"\n";
    return 0;
}
