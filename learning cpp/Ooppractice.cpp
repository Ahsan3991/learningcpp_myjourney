#include <iostream>
#include <stdexcept> //to use throw keyword, The throw keyword is used to signal that an exception has occurred. When throw is executed, the normal flow of program execution is interrupted.
using namespace std;
// understanding classes, objects, constructor and deconstructors, setters and getters (encapsulation)

class Employee              // class employee, classes are user defined data types basically
{

private: 
int Age;                    // made age private to understand different usage of private and public variable

public:
string Name;
string Company;



Employee(string name, string company, int age){         // Constructor defining attributes of employee

    Name = name;
    Company = company;
    setAge(age);
}
// setter and getter funciton are employed to perform encapsulation.
void setAge (int age){                  // using setter function to to check if age of employee is more than 18

    if(age >= 18 && age <=65){
        Age = age;
    }else{ 
       throw invalid_argument("Invalid age provided");
        }

}

int getAge (){                      // using getter function to return the age of employee back after checking
    return Age;
}



void introduceYourself(){                       // function or method used to print out the information of various employees
    cout<< "Name of Employee: "<< Name<<endl;
    cout<< "Name of Company: "<< Company<<endl;
    cout<< "Age of Employee: "<< Age<<endl;

}

};

// understanding the concept of inheritance and how constructors are build in the inherited class

class Developer: Employee{
// making the attribute private here to also demonstrate encapsulation in inherited class.
private:
    string FavProgrammingLang;


public:
// First part of the constructor comes from the inherited class and the arguments inlcude inherited attribute as well as 
// attributes from the base class. :Employee(arguments) specifies the default constructor for the base Employee class. 
// name, company and age attributes in :Employee(arguments) is taking care of (string name, string company, int age,..)
// so we dont have to define them again and tring favprogramminglang is defined via a setter function

    Developer(string name, string company, int age, string favprogramminglang):Employee(name, company, age) { 
        setFavProglang(favprogramminglang);
    }

void setFavProglang(string favprogramminglang){

    if (favprogramminglang == "cpp" || favprogramminglang == "python" || favprogramminglang == "rust" || favprogramminglang == "java" ){
        FavProgrammingLang = favprogramminglang;
    }else {
        cout<<"Invalid programming language"<<endl;
    }

}

string getFavProgLang(){
    return FavProgrammingLang;
}

};



int main(){
    
    
    /* Employee Employee1 = Employee("Ahsan", "Vilisto", 31);       // instance of class Employee 
    Employee1.introduceYourself();       
    Employee Employee2 = Employee("John", "Private", 30);          // Another instance of class Employee
    Employee2.introduceYourself();
    
   // Employee1.getAge();                                         // Calling the getter function of class employee to access age attribute
   */

/*     Developer developer1 = Developer("Ahsan", "Vilisto", 31, "cpp"); //instantiate the developer class
    cout<<developer1.getFavProgLang()<<endl; */


    return 0;
}