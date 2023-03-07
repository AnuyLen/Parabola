#include "Parabola.h"
#include <iostream>

//����������� ��� ����������
Parabola::Parabola()
{
	a = 0;
	b = 0;
	c = 0;
}

//������������ � �����������
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

//����� �������������
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

//���������� ���������� �� ������� �������� �� ������ ���������
double Parabola::Distance()
{
	double x0 = -b / (2 * a);  //���������� x ������� ��������
	double y0 = a * x0 * x0 + b * x0 + c;  //���������� y ������� ��������
	return sqrt(x0 * x0 + y0 * y0); //���������� �� ������� �������� �� ������ ���������
}

//�������� ������������� ���� �������
Parabola Parabola::add(Parabola pb1, Parabola pb2)
{
	Parabola pb;
	pb.a = pb1.a + pb2.a;  //�������� ������������� a
	pb.b = pb1.b + pb2.b;  //�������� ������������� b
	pb.c = pb1.c + pb2.c;  //�������� ������������� c
	return pb;
}