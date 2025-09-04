#include <iostream>
using namespace std;
class Student
{
private:
	char* FIO;
	int age;
	char* phone;
	char* city;
	char* country;
	char* university;
	char* group;
public:
	Student()
	{
		FIO = nullptr;
		age = 0;
		phone = nullptr;
		city = nullptr;
		country = nullptr;
		university = nullptr;
		group = nullptr;
		cout << "Constructor by default\n";
	}
	Student(const char* n,int a, const char* p, const char* c, const char* count, const char* u, const char* g) // конструктор с параметрами
	{
		FIO = new char[strlen(n) + 1];
		strcpy_s(FIO, strlen(n) + 1, n);
		age = a;
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
	~Student()//destructor
	{
		cout << "Destructor\n";
		delete[] FIO;
		delete[] phone;
		delete[] city;
		delete[] country;
		delete[] university;
		delete[] group;
	}
	void init(const char* n, int a, const char* p, const char* c, const char* count, const char* u, const char* g)
	{
		if (FIO != nullptr)
		{
			delete[] FIO;
		}
		if (phone != nullptr)
		{
			delete[] phone;
		}
		if (city != nullptr)
		{
			delete[] city;
		}
		if (country != nullptr)
		{
			delete[] country;
		}
		if (university != nullptr)
		{
			delete[] university;
		}
		if (group != nullptr)
		{
			delete[] group;
		}
		FIO = new char[strlen(n) + 1];
		strcpy_s(FIO, strlen(n) + 1, n);
		age = a;
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
	void print()
	{
		cout << "Name: " << FIO << "  Age:" << age <<  "  Phone:" << phone << "  City:" << city << "  Country:" << country << "  University:" << university << "  Group: " << group <<  endl;
	}
	// cеттеры
	void setName(const char* f)
	{
		delete[] FIO;
		FIO = new char[strlen(f) + 1];
		strcpy_s(FIO, strlen(f) + 1,f);
	}
	void setAge(int a)
	{
		if (a > 0 && a < 100)
		{
			age = a;
		}
		else
		{
			cout <<  "Error";
		}
	}
	void setPhone(const char* p)
	{
		delete[] phone;
		phone = new char[strlen(p) + 1];
		strcpy_s(phone, strlen(p) + 1, p);
	}
	void setCity(const char* s)
	{
		delete[] city;
		city = new char[strlen(s) + 1];
		strcpy_s(city, strlen(s) + 1, s);
	}
	void setCountry(const char* c)
	{
		delete[] country;
		country = new char[strlen(c) + 1];
		strcpy_s(country, strlen(c) + 1, c);
	}
	void setUniversity(const char* u)
	{
		delete[] university;
		university = new char[strlen(u) + 1];
		strcpy_s(university, strlen(u) + 1, u);
	}
	void setGroup(const char* g)
	{
		delete[] group;
		group = new char[strlen(g) + 1];
		strcpy_s(group, strlen(g) + 1, g);
	}
	
	// геттеры 
	const char* getAge()
	{
		return FIO;
	}
	const char* getPhone()
	{
		return phone;
	}
	const char* getCity()
	{
		return city;
	}
	const char* getCountry()
	{
		return country;
	}
	const char* getUniversity()
	{
		return university;
	}
	const char* getGroup()
	{
		return group;
	}
};
int main()
{
	Student One("vanyok", 22 ,"+380985438982", "Odesa", "Ukraine", "IT Step", "KN-241"); // вызов конструктора с параметрами
	One.print();
	Student Two;
	Two.init("Irina", 20, "+38098554322", "Odesa", "Ukraine", "IT Step", "KN-241"); // вызов конструктора по умолчанию
	Two.print();
	Two.setCountry("Poland");
	Two.setCity("Krakow");
	Two.setPhone("+4843284023");
	Two.print();
}
