#include <iostream>
using std::string;

// Creating a class Employee
class Employee {

//There are 3 types of Access Modifiers
// 1. Private (By default in C++)
// 2. Public
// 3. Protected


// Now keeping the properties Public for simplicity  
public:

    //Creating properties for the class Employee
    string Name;
    string Company;
    int Age;

    // Creating a method for employees to introduce themselves
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    // Created a Constructor

    // Rules for Creating a Constructor
    // 1. An User-defined Constructor has no specified data type
    // 2. An User-defined Constructor must have the same name as that of the Class
    // 3. An User-defined Constructor must be Public inside the Class

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age; 
    }
}; 
int main()
{
    // Created an Employee 1
    Employee employee1 = Employee("Sid", "FreeCodeCamp", 18);
    employee1.IntroduceYourself();

    // Created an Employee 2
    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself();
}