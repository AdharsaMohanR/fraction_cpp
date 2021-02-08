#include "fraction.h"
#include <gtest/gtest.h>
namespace {
TEST(Fraction,Empty_constructor)
{
Fraction F1;
EXPECT_EQ(0,F1.Simplest());
}
TEST(Fraction,Parameter_constructor)
{
Fraction F1(5,6);
Fraction F2(8,9);
Fraction F3;
F3=F1+F2;
EXPECT_EQ(0,F3.Simplest());
}
TEST(Fraction,constructor)
{
Fraction F1(1,10);
EXPECT_EQ(0,F1.Simplest());
}
}