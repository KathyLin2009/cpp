#include <iostream> 
using namespace std;

int main()
{
    string color, pluralnoun, person;
    
    cout << "Write a color:";
    getline(cin, color);

    cout << "Write a plural noun:";
    getline(cin, pluralnoun);

    cout << "Write a person's name:";
    getline(cin, person);

    cout << "Roses are " << color << endl;
    cout << pluralnoun << " are blue" << endl;
    cout << "I love " << person << endl;
    


}