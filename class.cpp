#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

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

    /*Employee employee1;
    employee1.Name = "Srajal";
    employee1.Company = "Microsoft";
    employee1.Age = 23;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "trevor";
    employee2.Company = "Microsoft";
    employee2.Age = 26;

    employee2.IntroduceYourself();*/

    Employee employee3 = Employee("Rajat", "Microsoft", 24); // Constructed Employee
    employee3.IntroduceYourself();
}
