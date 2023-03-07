#include <iostream>
#include <windows.h>
#include "Parabola.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Parabola parab(6.32, 57.1, 4.12);
	parab.Display();
}