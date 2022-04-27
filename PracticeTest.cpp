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

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, zzz_repeats)
{
	Practice testObject;

	ASSERT_EQ(testObject.count_starting_repeats("zzz"), 3);
}

TEST(PracticeTest, ascending)
{
	Practice testObject;
	int a = 1;
	int b = 2;
	int c = 3;
	testObject.sortDescending(a, b, c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, starting)
{
	Practice testObject;

	ASSERT_EQ(testObject.count_starting_repeats("a"), 1);
}

TEST(PracticeTest, failStart)
{
	Practice testObject;
	ASSERT_NE(testObject.count_starting_repeats("aZ"), 2);

}

TEST(PracticeTest, paliFail)
{
	Practice testObject;
	ASSERT_NE(testObject.isPalindrome("palindrome"), false);
}

TEST(PracticeTest, paliSuccess)
{
	Practice testObject;
	ASSERT_EQ(testObject.isPalindrome("racecar"), true);
}
			
/*TEST(PracticeTest, nighter)
{
	Practice testObject;
	int sleep[7] = 0;
	ASSERT_EQ(testObject.allnighter(sleep[7]), 0);
}*/
