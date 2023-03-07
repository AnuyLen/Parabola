using namespace std;

class Parabola
{
private:
	double a;  //����������� a
	double b;  //����������� b
	double c;  //����������� c
public:
	Parabola();   //����������� ��� ����������
	Parabola(double A, double B, double C);  //������������ � �����������
	void Init(double A, double B, double C);  //����� �������������
	void Display();  //����� ��� ������ ��������
	double GetA();  //���������� ����������� a
	double GetB();  //���������� ����������� b
	double GetC();  //���������� ����������� �
	double Distance();  //���������� ���������� �� ������� �������� �� ������ ���������
	Parabola add(Parabola pb1, Parabola pb2);  //�������� ������������� ���� �������
};

