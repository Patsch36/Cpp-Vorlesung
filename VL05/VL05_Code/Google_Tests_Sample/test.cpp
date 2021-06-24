#include "pch.h"



bool isFibonacci(int maybeFinonacci)
{
	if (maybeFinonacci < 1)
		return false;
	if (maybeFinonacci == 1)
		return true;

	int currentFinonacci = 1;
	int previousFibonacci = 1;
	while (currentFinonacci < maybeFinonacci)
	{
		int oldFibonacci = currentFinonacci;
		currentFinonacci += previousFibonacci;
		previousFibonacci = oldFibonacci;

		if (currentFinonacci == maybeFinonacci)
			return true;
	}
	return false;
}

TEST(isFibonacci, zero) {

	ASSERT_FALSE(isFibonacci(0));
	ASSERT_EQ(isFibonacci(0), false);

  /*EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);*/
}

TEST(isFibonacci, negativeNumbers) {

	ASSERT_FALSE(isFibonacci(-10));
	ASSERT_FALSE(isFibonacci(-5));
	ASSERT_FALSE(isFibonacci(-70));
}

TEST(isFibonacci, positiveFibonacciNumbers) {
	ASSERT_TRUE(isFibonacci(1));
	ASSERT_TRUE(isFibonacci(2));
	ASSERT_TRUE(isFibonacci(5));
	ASSERT_TRUE(isFibonacci(196418));
}

TEST(isFibonacci, positiveNoneFibonacciNumbers) {

	ASSERT_FALSE(isFibonacci(12));
	ASSERT_FALSE(isFibonacci(26));
	ASSERT_FALSE(isFibonacci(22));
	ASSERT_FALSE(isFibonacci(50));
}