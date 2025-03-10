#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
	#include "../BCSRec/rectangle.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTest
{
	TEST_CLASS(BCSRecTest)
	{
	public:
		
		TEST_METHOD(TestGetPerimeter)
		{
			//test for standard values
			int length = 5;
			int width = 10;
			int result = getPerimeter(&length, &width);
			Assert::AreEqual(30, result);
		}

		TEST_METHOD(TestGetArea)
		{
			//test for standard values
			int length = 5;
			int width = 10;
			int result = getArea(&length, &width);
			Assert::AreEqual(50, result);
		}

		TEST_METHOD(TestSetLength)
		{
			//test for out of bounce lower limit
			int input = 0;
			int length = 1;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);
			//test for out of bounce upper limit
			input = 100;
			length = 1;
			setLength(100, &length);
			Assert::AreNotEqual(input, length);
			//test for out of proper input
			input = 50;
			length = 1;
			setLength(50, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(TestSetWidth)
		{
			//test for out of bounce lower limit
			int input = 0;
			int width = 1;
			setWidth(0, &width);
			Assert::AreNotEqual(input, width);
			//test for out of bounce upper limit
			input = 100;
			width = 1;
			setWidth(100, &width);
			Assert::AreNotEqual(input, width);
			//test for out of proper input
			input = 50;
			width = 1;
			setWidth(50, &width);
			Assert::AreEqual(input, width);
		}
	};
}
