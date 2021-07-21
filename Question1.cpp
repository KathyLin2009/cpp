#include <iostream>
#include <vector>
using namespace std;

int ArrayMultiplier(vector<int> a)
{
    int total = 0;
    for(int i = 0; i < a.size(); i++)
    {
        total = a[i] * i + total;
    }

    return total;
}

int main()
{
    int result;
    vector<int> a = {0, -2, 5, 1};
    result = ArrayMultiplier(a);
    cout << result << endl;

    return 0;
}