// Using Inheritance to create a Developer class & a Teacher class to inherit from Employee

#include <iostream>
using std::string;

//Abstracting the Employee class
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

//Employee class signs a contract of abstraction with class AbstractEmployee
class Employee: AbstractEmployee {

private:
    // Making the Properties Private to implement Encapsulation
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


    //Setter and getter for the attribute Name
    void setAge(int age) {
        if(age >= 18){
            Age = age;
        }
    }
    int getAge() {
        return Age;
    }  
    
    //Method for an Employee to introduce himself/herself
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    // User-defined Constructor that is used to create an Object from the properties inside a Class
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age; 
    }

    //Implementing the Method of asking for Promotion from the abstract class of employees
    void AskForPromotion(){
        if(Age > 30){
            std::cout << Name << " got Promoted!" << std::endl;
        }
        else{
            std::cout << Name << " , Sorry NO promotions for You!" << std::endl;
        }
    }
};


// Creating a sub-class of Developer and linking it to Super-class Employee (Contract)
class Developer: public Employee {

public:
    string FavProgrammingLanguage;

    // Creating a separate constructor for Developer
    Developer(string name, string company, int age, string favProgrammingLanguage): Employee(name, company, age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    // Adding a simple method specifically to the Developer class
    void FixBug() {
        std::cout << getName() << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
};

//Creating an another sub-class of Teacher and linking it to Super-class Employee (Contract)
class Teacher: public Employee {
public:

    string Subject;

    // Adding a simple method specifically for the Teacher sub-class
    void PrepareLesson(){
        std::cout << getName() << " is Preparing " << Subject << " lesson" << std::endl;
    }

    // Creating a separate constructor for Teacher 
    Teacher(string name, string company, int age, string subject): Employee(name, company, age){
        Subject = subject;
    }
};
int main()
{
    // Creating a Developer
    Developer d = Developer("Sid", "FreeCodeCamp", 25, "C++");
    d.FixBug();
    d.FixBug();
    d.FixBug();
    d.AskForPromotion();

    // Creating a Teacher
    Teacher jack = Teacher("Jack", "Cool School", 35, "History");
    jack.PrepareLesson();
    jack.AskForPromotion();
}