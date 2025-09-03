#include <iostream>
using namespace std;
class Student
{
private:
	char* FIO;
	int date;
	char* phone;
	char* city;
	char* country;
	char* university;
	char* group;

public:
	void print()
	{
		cout << "Name: " << FIO << "  Date:" << date <<  "  Phone:" << phone << "  City:" << city << "  Country:" << country << "  University:" << university << "  Group: " << group <<  endl;
	}
	void init(const char *f, int d,const char *p,const char *c,const char *count,const char *u,const char *g) 
	{
		FIO = new char[strlen(f) + 1];
		strcpy_s(FIO, strlen(f) + 1, f);
		date = d;
		phone = new char[strlen(p) + 1];
		strcpy_s(phone, strlen(p) + 1, p);
		city = new char[strlen(c) + 1];
		strcpy_s(city, strlen(c) + 1, c);
		country = new char[strlen(count) + 1];
		strcpy_s(country, strlen(count) + 1, count);
		university = new char[strlen(u) + 1];
		strcpy_s(university, strlen(u) + 1, u);
		group = new char[strlen(g) + 1];
		strcpy_s(group, strlen(g) + 1, g);
	}
	void MyDelete()
	{
		delete[] FIO;
		delete[] phone;
		delete[] city;
		delete[] country;
		delete[] university;
		delete[] group;
	}
	int getAge()
	{
		return date;
	}
	void setAge(int a)
	{
		if (a > 0 && a < 100)
		{
			date = a;
		}
		else
		{
			cout <<  "Error";
		}
	}
	int getGroup()
	{
		return date;
	}
	void setGroup(int a)
	{
		if (a > 0)
		{
			date = a;
		}
	}
};
int main()
{
	Student One;
	One.init("vanyok", 22, "+380985438982", "Odesa", "Ukraine","IT Step","KN-241");
	One.print();

	One.setAge(99);
	One.print();
	One.MyDelete();
}
