#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float salary;

public:
    // Constructor
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1("Sonika",122, 50000);
    e1.display();

    return 0;
}