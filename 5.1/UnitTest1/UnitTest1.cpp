#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double d = h(0, 1);
			Assert::AreEqual(d,0.);
		}
	};
}
