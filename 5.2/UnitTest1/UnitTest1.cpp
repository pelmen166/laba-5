#include "pch.h"
#include "CppUnitTest.h"
#include "../лабораторна робота 5.2 (2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double е;
			е = A(0, 1, 1);
			Assert::AreEqual(е, 0.);


		}
	};
}
