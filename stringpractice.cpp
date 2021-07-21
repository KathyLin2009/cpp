#include <iostream>
#include <string>
#include <gtest/gtest.h>
using namespace std;

string reverse(string a)
{
    string b;
    for(int i = 0; i < a.length(); i++)
    {
        b.insert(0, string(1, a[i]));
    }
    return b;
}

void SwapChar(char &a, char &b)
{
    char t;
    t = a;
    a = b;
    b = t;

}

string ReverseString(string a)
{
    int i = 0;
    int j = a.length() - 1;
    while(i < j)
    {
        SwapChar(a[i], a[j]);
        i++;
        j--;
    }
    return a;
}


TEST(StringTest, ReverseString){
	ASSERT_EQ("yhtaK", ReverseString("Kathy"));
}

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}