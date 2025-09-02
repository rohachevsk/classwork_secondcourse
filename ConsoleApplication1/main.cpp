#include <iostream>
using namespace std;
//
//class Point
//{
//    int x;
//    int y;
//public:
//    void init(int a, int b)
//    {
//        x = a;
//        y = b;
//    }
//    void print()
//    {
//        cout << "X:  " << x << endl;
//        cout << "Y:  " << y << endl;
//    }
//    /*void init(int a, int b)
//    {
//        x = rand() % 20;
//        y = rand() % 10;
//    }*/
//    int Getx()
//    {
//        return x;
//    }
//    void Setx(int a)
//    {
//        if (a > 0)
//        {
//            x = a;
//        }
//    }
//    int Gety()
//    {
//        return y;
//    }
//    void Sety(int a)
//    {
//        if (a > 0)
//        {
//            y = a;
//        }
//    }
//};
//int main()
//{
//    
//    
//    Point a;
//
//    a.init(10, 20);
//    a.print();
//    
//    Point b;
//
//    b.init(2, 100);
//    b.print();
//
//    b.Setx(5);
//    b.print();
//
//}

//class Drob
//{
//private:
//	int chislitel;
//	int znamenatel;
//public:
//	Drob(int ch, int zn)
//	{
//		chislitel = ch;
//		znamenatel = zn;
//	}
//	void input()
//	{
//		cout << "Vvedite chislitel i znamenatel: ";
//		cin >> chislitel >> znamenatel;
//	}
//	void print()
//	{
//		cout << chislitel << "/" << znamenatel << endl;
//	}
//	void Sum(Drob& d)
//	{
//		cout << "Sum: " << chislitel + d.chislitel << "\t" << znamenatel + d.znamenatel << endl;
//	}
//	void mult(Drob& d)
//	{
//		cout << "mult: " << chislitel * d.chislitel << "\t" << znamenatel * d.znamenatel << endl;
//	}
//	void div(Drob& d)
//	{
//		cout << "div: " << chislitel / d.chislitel << "\t" << znamenatel / d.znamenatel << endl;
//	}
//	void minus(Drob& d)
//	{
//		cout << "minus: " << chislitel - d.chislitel << "\t" << znamenatel - d.znamenatel << endl;
//	}
//	int Getx()
//    {
//        return chislitel;
//    }
//    void Setx(int a)
//    {
//        if (a > 0)
//        {
//			chislitel = a;
//        }
//    }
//    int Gety()
//    {
//        return znamenatel;
//    }
//    void Sety(int a)
//    {
//        if (a > 0)
//        {
//			znamenatel = a;
//        }
//    }
//};
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
