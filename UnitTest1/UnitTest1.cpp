#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[15] = "abcdefg 324 hi";
			int k = MaxLength(str);
			Assert::AreEqual(7, k);
		}
	};
}
