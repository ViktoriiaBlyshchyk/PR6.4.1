#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR6.4.1\PR6.4.1\PR6.4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41
{
	TEST_CLASS(UnitTest41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { -1, -2, 3 };
			int S = Sum(a, 3, 0);
			Assert::AreEqual(S, -3);
		}
	};
}
