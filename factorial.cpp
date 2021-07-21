#include <iostream>
using namespace std;
int factorial_iterative(int n)
{
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int factorial_recursive(int n)
{
    if(n < 2)
    {
        return 1;
    }
    return n * factorial_recursive(n-1);
}

int main()
{
    cout << factorial_iterative(3) << endl;
    cout << factorial_recursive(3);
}