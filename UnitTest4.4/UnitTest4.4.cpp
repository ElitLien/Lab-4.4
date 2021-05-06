#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4.4/Ball.h"
#include "../Lab_4.4/Ball.cpp"
#include "../Lab_4.4/Body.h"
#include "../Lab_4.4/Body.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Ball a(0);
			Assert::AreEqual(a.Plos(), 0.0);
		}
	};
}
