/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ab");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, single_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, special_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("**");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, mix_case_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("A a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, order_correct)
{
    sortDescending(1, 2, 3);
    ASSERT_LE(first, second);
	ASSERT_LE(second, third);
}

TEST(PracticeTest, order_reverse)
{
    sortDescending(3, 2, 1);
    ASSERT_LE(first, second);
	ASSERT_LE(second, third);
}

TEST(PracticeTest, order_neg_value)
{
    sortDescending(-1, 2, 3);
    ASSERT_LE(first, second);
	ASSERT_LE(second, third);
}