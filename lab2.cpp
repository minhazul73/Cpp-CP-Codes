#include <bits/stdc++.h>
using namespace std;

class Member
{
    public:
    int age, salary;
    string name, address, phone;

    void printSalary()
    {
        cout << "Salary: " << salary << endl;
    }
};
class Employee : public Member
{
    public:
    string specialization;

    void assignE(string n, int a, string add, string p, int s)
    {
        name = n;
        age = a;
        address = add;
        phone = p;
        salary = s;
    }

    void printE()
    {
        cout << "EMPLOYEE\n";
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "address: " << address << endl;
        cout << "phone: " << phone << endl;
    }
};
class Manager : public Member
{
    public:
    string department;

    void assignM(string n, int a, string add, string p, int s)
    {
        name = n;
        age = a;
        address = add;
        phone = p;
        salary = s;
    }
    void printM()
    {
        cout << "MANAGER\n";
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "address: " << address << endl;
        cout << "phone: " << phone << endl;
    }
};
int main()
{
    Employee emp;
    Manager man;
    emp.assignE("Bruh", 23, "brooklyn", "987654321", 20000);
    man.assignM("Nigga", 69, "San Andreas", "1234567890", 30000);
    emp.printE();
    emp.printSalary();
    man.printM();
    man.printSalary();
}