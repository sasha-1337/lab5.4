#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/lab5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod5_4)
		{
			double z;
			double k = 0, N = 0;
			z = S0(k, N);
		}
	};
}
