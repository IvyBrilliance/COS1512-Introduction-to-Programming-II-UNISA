#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    Person();
    Person(string fname, string lname);
    void getInfo();
    void setFirstName(string fname);
    void setLastName(string lname);
private:
    string firstname;
    string lastname;
}

// Inheritance:
class Student : public Person{
public:
    Student();
    Student(string fname, string lname, int id);
    void getInfo(); // override the getInfo() function of the Person class
private:    
    int studentID;
}

class Lecturer : public Person{
public:
    Lecturer();
    Lecturer(string fname, string lname, int departmentId);
    void getInfo(); // override the getInfo() function of the Person class
private:    
    int departmentId;
}

int main(){
    Person person1("John", "Smith");

    // STUDENT instantiate:
    Student student1("Alice", "Johnson", 12345);
    student1.getInfo();
   


    Person person2();
    person2.setFirstName("Jane");
    person2.setLastName("Doe");

    // get both of their full names:
    person1.getFullname();
    person2.getFullname();

    return 0;
}

Person::Person(string fname, string lname){
    firstname = fname;
    lastname = lname;
}

Person::getInfo(){
    cout << "The full name is : " << firstname << " " << lastname << endl;
}

Person::setFirstName(string fname){
    firstname = fname;
}
Person::setLastName(string lname){
    lastname = lname;
}

// student:
Student::Student(string fname, string lname, int id) : Person(fname, lname){
    studentID = id;
}
Student::getInfo(){
    // call the getInfo() function of the Person class to get the full name:
    Person::getInfo();
    cout << "The student ID is : " << studentID << endl;
}
Lecturer::Lecturer(string fname, string lname, int departmentId) : Person(fname, lname){
    departmentId = departmentId;
}
Lecturer::getInfo(){
    // call the getInfo() function of the Person class to get the full name:
    Person::getInfo();
    cout << "The department ID is : " << departmentId << endl;
}