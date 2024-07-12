//#include "pch.h"
#include "CppUnitTest.h"
#include "../Combat System Test/Level.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPGTests
{
	TEST_CLASS(LevelTests)
	{
	public:

		TEST_METHOD(Blank_Constructor)
		{
			Level level;
			Assert::IsTrue(level.GetLevel() == 1);
			Assert::IsTrue(level.GetCurrentExperience() == 1.0f);
			Assert::IsTrue(level.GetNextLevelExperience() == 2.0f);
			Assert::IsTrue(level.GetLevelingScale() == 0.0f);
			Assert::IsTrue(level.GetLevelingBuff() == 0.0f);
			Assert::IsTrue(level.LeveledUp() == false);
		}


		TEST_METHOD(OnlyNumber_Constructor)
		{
		}


		TEST_METHOD(Number_Scale_Constructor)
		{
		}


		TEST_METHOD(Number_Scale_CurrExp_NextExp_Constructor)
		{
		}

		TEST_METHOD(Number_Scale_CurrExp_NextExp_Buff_Constructor)
		{
		}


		TEST_METHOD(Number_Scale_CurrExp_NextExp_Buff_LeveledUp_Constructor)
		{
		}


		TEST_METHOD(GetLevel)
		{
		}


		TEST_METHOD(SetLevel)
		{
		}


		TEST_METHOD(GetExperience)
		{
		}


		TEST_METHOD(SetExperience)
		{
		}


		TEST_METHOD(GainExperience)
		{
		}


		TEST_METHOD(GetNextLevelExperience)
		{
		}


		TEST_METHOD(SetNextLevelExperience)
		{
		}


		TEST_METHOD(GetLevelingScale)
		{
		}


		TEST_METHOD(SetLevelingScale)
		{
		}


		TEST_METHOD(GetLevelingBuff)
		{
		}


		TEST_METHOD(SetLevelingBuff)
		{
		}

		TEST_METHOD(ApplyLevelingBuff)
		{
		}

		TEST_METHOD(RemoveLevelingBuff)
		{
		}

		TEST_METHOD(LeveledUp)
		{
		}

		TEST_METHOD(NoLvlUp)
		{
		}

		TEST_METHOD(DidLvlUp)
		{
		}

	};
}
