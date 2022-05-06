#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
      Person (string, int);
      void greet ();
      string name;
      int age;
};

Person::Person (string name, int age) : name(name), age(age) { };

void Person::greet () {
    cout << "Hi there, my name is " << this->name << " and I'm " << this->age << " years old!" << endl;
}

// bs change for github

int main () {
    
    Person person1 ("Wills", 26);
    person1.greet();

    Person * pointToWills = &person1;
    cout << "From the pointer pointToWills" << "\n";
    pointToWills->greet();
    
    cout << "Changing value pointed to by pointToWills (person1) via pointer" << endl;
    pointToWills->name = "Bob";

    cout << "After changing name member via pointer..." << endl;
    cout << pointToWills->name << endl;

    return 0;
}














