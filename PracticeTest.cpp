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
    bool actual = obj.isPalindrome("bA ab");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, order_correct)
{	
	Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, order_reverse)
{
	Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, order_neg_value)
{
	Practice obj;
	int first = -1;
	int second = 2;
	int third = 3;    
    obj.sortDescending(first, second, third);
    ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}

TEST(PracticeTest, order_same)
{
	Practice obj;
	int first = 44;
	int second = 44;
	int third = 44;    
    obj.sortDescending(first, second, third);
    ASSERT_GE(first, second);
	ASSERT_GE(second, third);
}