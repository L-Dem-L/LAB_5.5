#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.5/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestC)
        {
            int depth = 0;
            int level = 1;
            int result = C(3, 2, level, depth);

            Assert::AreEqual(3, result);
            Assert::AreEqual(3, depth);
        }

        TEST_METHOD(TestB)
        {
            int depth = 0;
            int level = 1;
            double result = b(3, level, depth);

            Assert::AreEqual(3.0, result);
            Assert::AreEqual(3, depth);
        }

        TEST_METHOD(TestF)
        {
            int depth = 0;
            int level = 1;
            int result = f(3, level, depth);

            Assert::AreEqual(3, result);
            Assert::AreEqual(3, depth);
        }
    };
}
