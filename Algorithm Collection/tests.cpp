#include "tests.h"

void Tests()
{
	TestMaxBuy();
}

void TestMaxBuy()
{
	MaxBuy(10000);
	for (int i = 0; i < 110; i += 10)
	{
		for (int j = 0; j < 1000; j += 100)
		{
			MaxBuy(i + j);
		}
	}
}
