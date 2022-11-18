#include "pch.h"
#include "CppUnitTest.h"
#include "../лабораторна робота 5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = j(0);
			Assert::AreEqual(a, 1.);
		}
	};
}
