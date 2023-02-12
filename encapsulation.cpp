#include <bits/stdc++.h>
using namespace std;

class Employee
{

private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }

    string getName()
    {
        return Name;
    }
    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl
             << "Company - " << Company << endl
             << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age)
    {

        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{

    Employee employee3 = Employee("Rajat", "Microsoft", 24); // Constructed Employee
    employee3.IntroduceYourself();

    employee3.setName("Srajal");
    cout << employee3.getName();
}
