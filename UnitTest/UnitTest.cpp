#include "pch.h"
#include "CppUnitTest.h"
#include "../C++Testing/Kalkulator.h"
#include "../C++Testing/Kalkulator.cpp"
#include <stdexcept>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestKalkKonstruntor)
		{
			Kalkulator kalk;
			Assert::AreEqual(0, kalk.getValue());
		}

		TEST_METHOD(TestKalkKonstruntorZParametrem)
		{
			Kalkulator kalk(9);
			Assert::AreEqual(9, kalk.getValue());
		}

		TEST_METHOD(TestKalkDodawanie)
		{
			Kalkulator* kalk = new Kalkulator;
			kalk->Kalkulator::dodaj(11);
			Assert::AreEqual(11, kalk->getValue());
		}

		TEST_METHOD(TestKalkOdejmowanie)
		{
			Kalkulator* kalk = new Kalkulator;
			kalk->odejmij(11);
			Assert::AreEqual(-11, kalk->getValue());
		}

		TEST_METHOD(TestKalkDzielenie)
		{
			Kalkulator* kalk = new Kalkulator(30);
			kalk->podziel(5);
			Assert::AreEqual(6, kalk->getValue());
		}

		TEST_METHOD(TestKalkDzieleniePrzezZero)
		{
			auto func = [this] {
				Kalkulator kalk(2);
				kalk.podziel(0); };
			Assert::ExpectException<std::invalid_argument>(func);
		}

		TEST_METHOD(TestKalkMnozenie)
		{
			Kalkulator* kalk = new Kalkulator(4);
			kalk->pomnoz(3);
			Assert::AreEqual(12, kalk->getValue());
		}
	};
}
