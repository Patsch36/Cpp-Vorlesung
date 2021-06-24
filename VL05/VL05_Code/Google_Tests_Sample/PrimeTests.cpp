#include "pch.h"
#include <cmath>


bool isPrime(long long n)
{
    if (n <= 1)  return false;

    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;

    return true;
}

TEST(isPrime, zero) {
    ASSERT_FALSE(isPrime(0));
}

TEST(isPrime, negativeNumbers) {

    ASSERT_FALSE(isPrime(-10));
    ASSERT_FALSE(isPrime(-5));
    ASSERT_FALSE(isPrime(-70));
    ASSERT_FALSE(isPrime(-2000));
    ASSERT_FALSE(isPrime(-1337));
}

TEST(isPrime, PrimeNumbers) {

    ASSERT_TRUE(isPrime(2));
    ASSERT_TRUE(isPrime(17));
    ASSERT_TRUE(isPrime(199));
    ASSERT_TRUE(isPrime(10729));
    ASSERT_TRUE(isPrime(40039));
}

TEST(isPrime, NonPrimeNumbers) {
    ASSERT_FALSE(isPrime(1));
    ASSERT_FALSE(isPrime(4));
    ASSERT_FALSE(isPrime(50));
    ASSERT_FALSE(isPrime(198));
    ASSERT_FALSE(isPrime(10728));
    ASSERT_FALSE(isPrime(40038));
}