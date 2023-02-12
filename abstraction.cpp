#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
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

    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " Got Promoted!";
        else
            cout << Name << " Sorry No Promotion!";
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
    employee3.AskForPromotion();
}
