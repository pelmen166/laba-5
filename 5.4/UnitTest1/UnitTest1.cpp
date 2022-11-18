#include "pch.h"
#include "CppUnitTest.h"
#include "../лабораторна робота 5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = P4(0, 1, 0, 4);
			Assert::AreEqual(a, 0.);
		}
	};
}
