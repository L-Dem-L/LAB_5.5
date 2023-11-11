#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int n = 2;

			k *= n * n - 2 * n + 1;

			Assert::AreEqual(k, 0);

		}
	};
}
