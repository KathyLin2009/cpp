#include <iostream>
using namespace std;

void pr(int start, int end)
{
    cout << start << "->" << end << endl;
}

void hanoi(int n, int start, int end)
{
    if(n==1)
    {
        pr(start, end);
        return;
    }  
    int other = 6 - (start + end);
    hanoi(n-1, start, other);
    pr(start, end);
    hanoi(n-1, other, end);
}

int main()
{
    hanoi(5, 1, 3);
}