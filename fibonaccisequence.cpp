#include <iostream>
using namespace std;

int main()
{
    int fib[2020];
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i < 2020; i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
    }
    
    for(int i = 0; i < 2020; i++)
    {
        cout << fib[i];
    } 
    return 0;
}