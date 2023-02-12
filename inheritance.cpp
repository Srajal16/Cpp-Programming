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

class Developer : Employee
{
public:
    string FavouriteProgrammingLanguage;

    Developer(string name, string company, int age, string language)
        : Employee(name, company, age)
    {

        FavouriteProgrammingLanguage = language;
    }

    void FixedBug()
    {
        cout << getName() << "Fix Bug" << FavouriteProgrammingLanguage;
    }
};

int main()
{

       Developer d = Developer("Srajal", "Microsoft", 21, "C++");
    d.FixedBug();
}
