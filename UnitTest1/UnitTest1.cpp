#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2.2/Lab_6.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[6]{ -8, 100, -13, 0, 7, -18 };
			Assert::AreEqual(SearchMin(arr, 6, 0, -1,101), 2);
		}
	};
}
