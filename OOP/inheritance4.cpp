#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setname(string iname)
    {
        name = iname;
    }
};

class student : private Person
{

public:
    using Person::name;
    using Person ::setname;
    void display()
    {
        cout << name << endl;
    }
    void setstudentname(string iname)
    {
        setname(iname);
    }
};

int main()
{
    student anil;
    anil.name = "anil";
    anil.display();

    return 0;
}