#include "pch.h"
#include "CppUnitTest.h"
#include "../лабораторна робота 5.0/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s = sum(1, 1);
			Assert::AreEqual(s, 2);
		}
	};
}
