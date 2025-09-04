#include <iostream>
using namespace std;

class Laptop
{
	char* model;
	char* color;
	double size;
	double price;
public:
	Laptop()
	{
		model = nullptr;
		color = nullptr;
		size = 0;
		price = 0;
		cout << "Constructor by default";
	}
	Laptop(const char* m, const char* c, int s,int p) // конструктор с параметрами
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);
		size = s;
		price = p;
};

void main()
{

}
