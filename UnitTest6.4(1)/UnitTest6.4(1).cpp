#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int k = 6;
			float a[k] = { 1,5,7,-6,2,-5 };
			t = SumOfTwoNegative(a,6);
			Assert::AreEqual(-9, t);

		}
	};
}
