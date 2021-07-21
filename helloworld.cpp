#include <iostream>
#include <gtest/gtest.h>
using namespace std;

int add(int a, int b)
{
	return a+b;
}


TEST(ADDDD, addtest){
	ASSERT_EQ(5, add(2,3));
}

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
