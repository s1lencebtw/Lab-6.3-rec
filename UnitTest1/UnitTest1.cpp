#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3 rec/Lab 6.3 rec.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[20] = { 13, 15, -5, -9, -11, -45, 48, 40, 7, 24, 32, 13, 37, 47, -42, 36, -13, -36, 6, 17 };
			int c = CountElements(a, 20, 0, 0);
			Assert::AreEqual(c, 12);
		}

		TEST_METHOD(TestMethod2)
		{
			int a[20] = { 13, 15, -5, -9, -11, -45, 48, 40, 7, 24, 32, 13, 37, 47, -42, 36, -13, -36, 6, 17 };
			int c = CountElements1(a, 20, 0, 0);
			Assert::AreEqual(c, 12);
		}
	};
}
