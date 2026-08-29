#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float marks;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Sonika";
    s1.age = 20;
    s1.marks = 85.5;

    s1.display();

    return 0;
}