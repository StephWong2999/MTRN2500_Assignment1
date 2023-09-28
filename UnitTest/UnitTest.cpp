#include "pch.h"
#include "CppUnitTest.h"
#include "NonNegativeArray.hpp"
#include "NonNegativeArray.cpp"

namespace MVC = Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(TestClass1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			MTRN2500::NonNegativeArray myArray{};
			MVC::Assert::IsTrue(true);
		}
	};
}
