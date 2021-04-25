#include <iostream> 
using namespace std;

void adding()
{
    int num1;
    int num2;
    int answer;
    cout << "What is the first number? " << endl;
    cin >> num1;
    cout << "What is the second number? " << endl;
    cin >> num2;
    if(num1 != num2)
    {
        answer = num1 + num2;
    }
    else
    {
        answer = num1 * 3;
    }
    cout << "The answer is: " << answer;
}

int main()
{
    adding();
}