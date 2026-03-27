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


int main(){
    Person person1("John", "Smith");

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

