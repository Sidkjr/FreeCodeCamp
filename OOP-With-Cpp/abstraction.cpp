// Using Abstraction to ask for Promotions from an employee

#include <iostream>
using std::string;

// Creating an Abstract class
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

//Linking the Employee class to the Abstract class by using (contracts) i.e :
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


    //Setter and getter for the attribute Age
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

    // Implementing the Pure Virtual function from the abstract class to be used by the Employee class
    void AskForPromotion(){

        // Setting a condition for implementation of the promotion function 
        if(Age > 30){
            std::cout << Name << " got Promoted!" << std::endl;
        }
        else{
            std::cout << Name << " , Sorry NO promotions for You!" << std::endl;
        }
    }
}; 

int main()
{
    //Creating an employee 1
    Employee employee1 = Employee("Sid", "FreeCodeCamp", 18);
    employee1.IntroduceYourself();

    // Creating an employee 2
    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.IntroduceYourself();

    //Using the setter and getter methods to access the Encapsulated properties of Employee class
    employee1.setAge(19);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old " << std:: endl;

    // Calling the Promotion method
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    // Testing the condition of Promotion method
    employee1.setAge(33);
    std::cout << "After 24 Long Years, Finally..." << std::endl;
    employee1.AskForPromotion();
}