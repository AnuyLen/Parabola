#include "pch.h"
#include "CppUnitTest.h"
#include "../stp-parabola/Parabola.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace parabolatest
{
	TEST_CLASS(parabolatest)
	{
	public:
		//Контруктор с положительными числами
		TEST_METHOD(Constructor_positive)
		{
			double a = 3.65;
			double b = 8.234;
			double c = 1.245;
			Parabola pb(a, b, c);
			Assert::AreEqual(a, pb.GetA());
			Assert::AreEqual(b, pb.GetB());
			Assert::AreEqual(c, pb.GetC());
		}
		//Конструктор с отрицательными числами
		TEST_METHOD(Constructor_negative)
		{
			double a = -23.2;
			double b = -1.458;
			double c = -4.23;
			Parabola pb(a, b, c);
			Assert::AreEqual(a, pb.GetA());
			Assert::AreEqual(b, pb.GetB());
			Assert::AreEqual(c, pb.GetC());
		}
		//Сложение положительных коэффициентов парабол
		TEST_METHOD(AddParabola_positive)
		{
			Parabola pb1(6.24, 11.46, 3.23);
			Parabola pb2(0.35, 5.231, 1.245);
			Parabola ad_pb = ad_pb.add(pb1, pb2);
			Assert::AreEqual(pb1.GetA() + pb2.GetA(), ad_pb.GetA());
			Assert::AreEqual(pb1.GetB() + pb2.GetB(), ad_pb.GetB());
			Assert::AreEqual(pb1.GetC() + pb2.GetC(), ad_pb.GetC());
		}
		//Сложение положительного и отрицательного коэффициентов парабол
		TEST_METHOD(AddParabola_all)
		{
			Parabola pb1(-5.21, 1.46, -7.83);
			Parabola pb2(0.35, -7.34, 1.245);
			Parabola ad_pb = ad_pb.add(pb1, pb2);
			Assert::AreEqual(pb1.GetA() + pb2.GetA(), ad_pb.GetA());
			Assert::AreEqual(pb1.GetB() + pb2.GetB(), ad_pb.GetB());
			Assert::AreEqual(pb1.GetC() + pb2.GetC(), ad_pb.GetC());
		}

		//Сложение отрицательных коэффициентов парабол
		TEST_METHOD(AddParabola_negative)
		{
			Parabola pb1(-1.21, -8.236, -7.83);
			Parabola pb2(-0.312, -9.34, -2.25);
			Parabola ad_pb = ad_pb.add(pb1, pb2);
			Assert::AreEqual(pb1.GetA() + pb2.GetA(), ad_pb.GetA());
			Assert::AreEqual(pb1.GetB() + pb2.GetB(), ad_pb.GetB());
			Assert::AreEqual(pb1.GetC() + pb2.GetC(), ad_pb.GetC());
		}
		//Вычисление расстояние с положительными коэффициентами
		TEST_METHOD(Distance_positive)
		{
			double a = 9.23;
			double b = 1.45;
			double c = 75.21;
			Parabola pb1(a, b, c);
			double x0 = -b / (2 * a);
			double y0 = a * x0 * x0 + b * x0 + c;
			double dist = sqrt(x0 * x0 + y0 * y0);
			Assert::AreEqual(dist, pb1.Distance());
		}
		//Вычисление расстояние с положительными и отрицательными коэффициентами
		TEST_METHOD(Distance_all)
		{
			double a = -6.23;
			double b = 93.52;
			double c = -0.24;
			Parabola pb1(a, b, c);
			double x0 = -b / (2 * a);
			double y0 = a * x0 * x0 + b * x0 + c;
			double dist = sqrt(x0 * x0 + y0 * y0);
			Assert::AreEqual(dist, pb1.Distance());
		}
		//Вычисление расстояние с отрицательными коэффициентами
		TEST_METHOD(Distance_negative)
		{
			double a = -12.23;
			double b = -3.58;
			double c = -0.234;
			Parabola pb1(a, b, c);
			double x0 = -b / (2 * a);
			double y0 = a * x0 * x0 + b * x0 + c;
			double dist = sqrt(x0 * x0 + y0 * y0);
			Assert::AreEqual(dist, pb1.Distance());
		}
		//Инициализация полей положительными числами
		TEST_METHOD(Init_positive)
		{
			double a = 8.22;
			double b = 3.52;
			double c = 0.24;
			Parabola pb1;
			pb1.Init(a, b, c);
			Assert::AreEqual(a, pb1.GetA());
			Assert::AreEqual(b, pb1.GetB());
			Assert::AreEqual(c, pb1.GetC());
		}
		//Инициализация полей отрицательными числами
		TEST_METHOD(Init)
		{
			double a = -8.22;
			double b = 3.52;
			double c = 5.24;
			Parabola pb1;
			pb1.Init(a, b, c);
			Assert::AreEqual(a, pb1.GetA());
			Assert::AreEqual(b, pb1.GetB());
			Assert::AreEqual(c, pb1.GetC());
		}
	};
}
