#include <iostream>
using namespace std;

int main()
{
    int x,y;

    for(int x=0; x<5; x++)
    {
        for(int y=0; y<5; y++)
        {
            cout << x << "," << y << " ";
        }
        cout << endl;
    }
}