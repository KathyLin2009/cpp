#include <iostream>
#include <vector>
using namespace std;

vector<int> MixMilk(vector<int> capacity, vector<int> amount)
{
    for(int i = 0; i < 33; i++)
    {
        if (amount[0] + amount[1] <= capacity[1])
        {
            amount[1] = amount[0] + amount[1];
            amount[0] = 0;
        }
        else
        {
            amount[0] = amount[0] + amount[1] - capacity[1];
            amount[1] = capacity[1];
        }

        if (amount[1] + amount[2] <= capacity[2])
        {
            amount[2] = amount[1] + amount[2];
            amount[1] = 0;
        }
        else
        {
            amount[1] = amount[1] + amount[2] - capacity[2];
            amount[2] = capacity[2];
        }

        if (amount[2] + amount[0] <= capacity[0])
        {
            amount[0] = amount[2] + amount[0];
            amount[2] = 0;
        }
        else
        {
            amount[2] = amount[2] + amount[0] - capacity[0];
            amount[0] = capacity[0];
        }
    }

    if(amount[0] + amount[1] <= capacity[1])
    {
        amount[1] = amount[0] + amount[1];
        amount[0] = 0;
    }
    else
    {
        amount[0] = amount[0] + amount[1] - capacity[1];
        amount[1] = capacity[1];
    }
    return amount;
}

int main()
{
    vector<int> capacity = {10, 11, 12};
    vector<int> amount = {3, 4, 5};
    vector<int> new_amount = MixMilk(capacity, amount);
    cout << new_amount[0] << endl << new_amount[1] << endl << new_amount[2];
}