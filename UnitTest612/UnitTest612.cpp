#include "pch.h"
#include "CppUnitTest.h"
#include "../pr6.1.2/pr6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int x[10] = { 1, 2, 3, 4, 5 , 6 ,7 ,8 , 9 , 10 };
			int res = CountElement(x, 10);
			Assert::AreEqual(res, res);
		}
	};
}
