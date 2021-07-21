#include <iostream>
#include <iterator>
#include <gtest/gtest.h>
using namespace std;

void SwapInt(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;

}

void ReverseArray(int nums[])
{
    int i = 0;
    int j = std::size_t(nums);
    while (i < j)
    {
        SwapInt(nums[i], nums[j]);
        i++;
        j--;
    }

}

TEST(ArrayTest, ReverseArray){
	ASSERT_EQ({5, 4, 3, 2, 1}, ReverseArray({1, 2, 3, 4, 5}));
}

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}