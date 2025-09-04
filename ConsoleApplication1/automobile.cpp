#include <iostream>
using namespace std;

class Car
{
private:
	char* model;
	char* country;
	char* color;
	int year;
	double price;
public:
	// конструктори и с параметрами и без
	Car()
	{
		model = nullptr;
		year = 0;
		country = nullptr;
		color = nullptr;
		price = 0;
		cout << "Constructor by default\n";
	}
	void init(const char* m, int y, const char* count, const char* c, double p)
	{
		if (model != nullptr)
		{
			delete[] model;
		}
		if (country != nullptr)
		{
			delete[] country;
		}
		if (color != nullptr)
		{
			delete[] color;
		}
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		year = y;
		country = new char[strlen(count) + 1];
		strcpy_s(country, strlen(count) + 1, count);
		color = new char[strlen(c) + 1];
		strcpy_s(color, strlen(c) + 1, c);
		price = p;
	}
	void print()
	{
		cout << "Model: " << model << "  Year:" << year << "  Country:" << country << "  Color:" << color << "  Price:" << price << endl;
	}
	~Car()//destructor
	{
		cout << "Destructor\n";
		delete[] model;
		delete[] country;
		delete[] color;
	}
};

int main()
{
	Car Lexus;
	Lexus.init("IS-250 Sport", 2013, "Japan", "Black", 20000);
	Lexus.print();
}