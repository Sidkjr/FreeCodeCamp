// Playing with Setters and Getters and Learning about Encapsulation

#include <iostream>
using std::string;

// Creating a Super-class Employee
class Employee {

// Making the properties Private, as in Encapsulating them.
private:
    string Name;
    string Company;
    int Age;

public:
    //Setter and getter for the attribute Name
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }


    //Setter and getter for the attribute Company
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }


    //Setter and getter for the attribute Age
    void setAge(int age) {
        if(age >= 18){
            Age = age;
        }
    }
    
    int getAge() {
        return Age;
    }  

    // A small method in a class for an employee to introduce himself/herself
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    // Creating an Constructor called Employee

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age; 
    }
}; 

int main()
{
    // Creating an employee 1
    Employee employee1 = Employee("Sid", "FreeCodeCamp", 18);
    employee1.IntroduceYourself();

    // Creating an employee 2
    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself();

    // Retrieving Encapsulated data by using setters and getters
    employee1.setAge(19);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old " << std:: endl;
}