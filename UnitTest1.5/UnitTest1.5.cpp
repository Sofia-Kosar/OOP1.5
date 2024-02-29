#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.5/Triad.h"
#include "../OOP1.5/Triad.cpp"
#include "../OOP1.5/Date.h"
#include "../OOP1.5/Date.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Triad t1, t2, t3;
            t1.Init(1, 2, 3);
            t2.Init(1, 2, 3);
           

            Assert::IsTrue(t1.Eq(t2));
            
        }

       
	};
}
