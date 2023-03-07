using namespace std;

class Parabola
{
private:
	double a;  //Коэффициент a
	double b;  //Коэффициент b
	double c;  //Коэффициент c
public:
	Parabola();   //Конструктор без параметров
	Parabola(double A, double B, double C);  //Конструтктор с параметрами
	void Init(double A, double B, double C);  //Метод инициализации
	void Display();  //Метод для вывода параболы
	double GetA();  //Возвращает коэффициент a
	double GetB();  //Возвращает коэффициент b
	double GetC();  //Возвращает коэффициент с
	double Distance();  //Вычисление расстояние от вершины параболы до начала координат
	Parabola add(Parabola pb1, Parabola pb2);  //Сложение коэффициентов двух парабол
};

