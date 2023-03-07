#include "Parabola.h"
#include <iostream>

//Конструктор без параметров
Parabola::Parabola()
{
	a = 0;
	b = 0;
	c = 0;
}

//Конструтктор с параметрами
Parabola::Parabola(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;
}

double Parabola::GetA()
{
	return a;
}

double Parabola::GetB()
{
	return b;
}

double Parabola::GetC()
{
	return c;
}

//Метод инициализации
void Parabola::Init(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;
}

void Parabola::Display()
{
	cout << a << "x^2";
	if (b < 0)
		cout << " - " << abs(b) << "x";
	else
		cout << " + " << abs(b) << "x";
	if (c < 0)
		cout << " - " << abs(c) << endl;
	else
		cout << " + " << abs(c) << endl;
}

//Вычисление расстояние от вершины параболы до начала координат
double Parabola::Distance()
{
	double x0 = -b / (2 * a);  //Координата x вершины параболы
	double y0 = a * x0 * x0 + b * x0 + c;  //Координата y вершины параболы
	return sqrt(x0 * x0 + y0 * y0); //Расстояние от вершины параболы до начала координат
}

//Сложение коэффициентов двух парабол
Parabola Parabola::add(Parabola pb1, Parabola pb2)
{
	Parabola pb;
	pb.a = pb1.a + pb2.a;  //Сложение коэффициентов a
	pb.b = pb1.b + pb2.b;  //Сложение коэффициентов b
	pb.c = pb1.c + pb2.c;  //Сложение коэффициентов c
	return pb;
}