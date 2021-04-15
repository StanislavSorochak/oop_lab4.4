#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba4.4/Dollar.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Dollar d(54);
			Assert::AreEqual(d.convertintohryvnia(), 1506.6);
		}
	};
}
