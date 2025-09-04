#include<iostream>
using namespace std;

class Student
{
private:
    char* name;
    char* surname;
    int age;
public:
    Student();  // ����������� �� ���������.   
    Student(int a);
    // ����������� � ������������ ����������� ���������� - ������� ����������� ������
    Student(const char* n, int a);
    void Print();
    void Init(const char* n, int a); // Oleg, 18    
    ~Student(); // destructor

};

Student::Student()
{
    name = nullptr;
    age = 0;
    cout << "Constructor by default\n";
}
Student::Student(int a)
{
    if (a > 0)
    {
        age = a;
    }
    cout << "Constructor by param: AGE\n";
}
Student::Student(const char* n, int a) : Student(a) // ������������� 
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    //age = a;
    cout << "Constructor by params: NAME\n";
}
void Student::Print()
{
    cout << "Name: " << name << "\tAge: " << age << endl;
}

void Student::Init(const char* n, int a)
{
    if (name != nullptr) // ���� � name ����� ������� � ���� 
    {
        delete[]name; // �������
    }
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
    age = a;
}
Student::~Student()
{
    cout << "Destructor \n";
    delete[] name;
}

int main() // �����
{

    Student obj1; // ����� ������������ �� ���������.
    obj1.Init("Oleg", 18);
    obj1.Print();

    Student obj2{ "Irina", 20 }; // ����� ������������ � ����������� 
    obj2.Init("Aleksandr", 19);
    obj2.Print();

}