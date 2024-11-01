#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    void disp()
    {
        cout << "This is a parent class" << endl;
    }
};
class child : public parent
{
public:
    void print()
    {
        cout << "This is a child class" << endl;
    }
};
int main()
{
    parent ob1;
    child ob2;

    ob1.disp();
    ob2.print();
    ob2.disp();
    return 0;
}