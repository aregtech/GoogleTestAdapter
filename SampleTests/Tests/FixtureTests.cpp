#include "gtest/gtest.h"
#include "../LibProject/Lib.h"
#include "../../GoogleTestAdapter/Core/Resources/GTA_Traits_1.8.0.h"


class TheFixture : public testing::Test
{
};

TEST_F(TheFixture, AddFails)
{
	EXPECT_EQ(1000, Add(10, 10));
}

TEST_F(TheFixture, AddPasses)
{
	EXPECT_EQ(20, Add(10, 10));
}

TEST_F(TheFixture, Crash)
{
	int* pInt = NULL;
	EXPECT_EQ(20, Add(*pInt, 10));
}

TEST_F_TRAITS(TheFixture, AddPassesWithTraits, Type, Small)
{
	EXPECT_EQ(20, Add(10, 10));
}

TEST_F_TRAITS(TheFixture, AddPassesWithTraits2, Type, Small, Author, CSO)
{
	EXPECT_EQ(20, Add(10, 10));
}

TEST_F_TRAITS(TheFixture, AddPassesWithTraits3, Type, Small, Author, CSO, TestCategory, Integration)
{
	EXPECT_EQ(20, Add(10, 10));
}
