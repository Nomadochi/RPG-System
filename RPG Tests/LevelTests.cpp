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
			Level level(10);
			Assert::IsTrue(level.GetLevel() == 10);
			Assert::IsTrue(level.GetCurrentExperience() == 0);
			unsigned int val = level.GetLevel() * 100.0f;
			Assert::IsTrue(level.GetNextLevelExperience() == val);
			Assert::IsTrue(level.GetLevelingScale() == 1.0f);
			Assert::IsTrue(level.GetLevelingBuff() == 0.0f);
			Assert::IsTrue(level.LeveledUp() == false);
		}


		TEST_METHOD(Number_Scale_Constructor)
		{
			Level level(10, 1.5f);
			Assert::IsTrue(level.GetLevel() == 10);
			Assert::IsTrue(level.GetCurrentExperience() == 0);
			unsigned int val = level.GetLevelingScale() * 100.0f;
			Assert::IsTrue(level.GetNextLevelExperience() == val);
			Assert::IsTrue(level.GetLevelingScale() == 1.5f);
			Assert::IsTrue(level.GetLevelingBuff() == 0.0f);
			Assert::IsTrue(level.LeveledUp() == false);
		}


		TEST_METHOD(Number_Scale_CurrExp_NextExp_Constructor)
		{
			Level level(10, 0, 1500, 1.5f);
			Assert::IsTrue(level.GetLevel() == 10);
			Assert::IsTrue(level.GetCurrentExperience() == 0);
			Assert::IsTrue(level.GetNextLevelExperience() == 1500);
			Assert::IsTrue(level.GetLevelingScale() == 1.5f);
			Assert::IsTrue(level.GetLevelingBuff() == 0.0f);
			Assert::IsTrue(level.LeveledUp() == false);
		}

		TEST_METHOD(Number_Scale_CurrExp_NextExp_Buff_Constructor)
		{
			Level level(10, 0, 1500, 1.5f, 1.25f);
			Assert::IsTrue(level.GetLevel() == 10);
			Assert::IsTrue(level.GetCurrentExperience() == 0);
			Assert::IsTrue(level.GetNextLevelExperience() == 1500);
			Assert::IsTrue(level.GetLevelingScale() == 1.5f);
			Assert::IsTrue(level.GetLevelingBuff() == 1.25f);
			Assert::IsTrue(level.LeveledUp() == false);
		}


		TEST_METHOD(Number_Scale_CurrExp_NextExp_Buff_LeveledUp_Constructor)
		{
			Level level(10, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.GetLevel() == 10);
			Assert::IsTrue(level.GetCurrentExperience() == 1600);
			Assert::IsTrue(level.GetNextLevelExperience() == 1500);
			Assert::IsTrue(level.GetLevelingScale() == 1.5f);
			Assert::IsTrue(level.GetLevelingBuff() == 1.25f);
			Assert::IsTrue(level.LeveledUp() == true);
		}


		TEST_METHOD(GetLevel)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.GetLevel() == 15);

		}


		TEST_METHOD(SetLevel)
		{
			Level level;
			level.SetLevel(31);
			Assert::IsTrue(level.GetLevel() == 31);
		}


		TEST_METHOD(GetExperience)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.GetCurrentExperience() == 1600);
		}


		TEST_METHOD(SetExperience)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.SetCurrentExperience(1200);
			Assert::IsTrue(level.GetCurrentExperience() == 1200);

		}


		TEST_METHOD(GainExperience)
		{
			Level level(15, 1100, 1500, 1.5f, 1.25f, true);
			level.GainExperience(235);
			Assert::IsTrue(level.GetCurrentExperience() == 1335);

		}


		TEST_METHOD(GetNextLevelExperience)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.GetNextLevelExperience() == 1500);
		}


		TEST_METHOD(SetNextLevelExperience)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.SetNextLevelExperience(1800);
			Assert::IsTrue(level.GetNextLevelExperience() == 1800);
		}


		TEST_METHOD(GetLevelingScale)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.GetLevelingScale() == 1.5f);

		}


		TEST_METHOD(SetLevelingScale)
		{
			
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.SetLevelingScale(2.3f);
			Assert::IsTrue(level.GetLevelingScale() == 2.3f);
		}


		TEST_METHOD(GetLevelingBuff)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.GetLevelingBuff() == 1.25f);
		}


		TEST_METHOD(SetLevelingBuff)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.SetLevelingBuff(2.3f);
			Assert::IsTrue(level.GetLevelingBuff() == 2.3f);
		}

		TEST_METHOD(ApplyLevelingBuff)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.ApplyLevelingBuff();
			Assert::IsTrue(level.GetLevelingScale() == 2.75f);
		}

		TEST_METHOD(RemoveLevelingBuff)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.ApplyLevelingBuff();
			Assert::IsTrue(level.GetLevelingScale() == 2.75f);
			level.RemoveLevelingBuff();
			Assert::IsTrue(level.GetLevelingScale() == 1.5f);

		}

		TEST_METHOD(LeveledUp)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			Assert::IsTrue(level.LeveledUp());
		}

		TEST_METHOD(NoLvlUp)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, true);
			level.NoLvlUp();
			Assert::IsFalse(level.LeveledUp());
		}

		TEST_METHOD(DidLvlUp)
		{
			Level level(15, 1600, 1500, 1.5f, 1.25f, false);
			level.DidLvlUp();
			Assert::IsTrue(level.LeveledUp());
		}

	};
}
