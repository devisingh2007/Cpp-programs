#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    int roll;
    string std_name;
    string branch;

public:
    // Constructor
    Students(int roll = 0, string std_name = "", string branch = "")
    {
        this->roll = roll;
        this->std_name = std_name;
        this->branch = branch;
    }

    // Getter methods
    int getRoll() const { return roll; }
    string getName() const { return std_name; }
    string getBranch() const { return branch; }

    // Setter methods
    void setRoll(int r) { roll = r; }
    void setName(string n) { std_name = n; }
    void setBranch(string b) { branch = b; }

    void print()
    {
        cout << "The print function is defined inside Students class : " << endl;
        cout << "student name is : " << this->std_name << endl;
        cout << "Roll number is : " << this->roll << endl;
        cout << "Branch is : " << this->branch << endl;
    }
};

int main()
{
    cout << "creating object of class Students" << endl;

    Students s1(25, "Jilan Mansuri", "CSE");
    cout << "inserted successfully" << endl;
    s1.print();

    cout << "\n" << endl;
    
    Students s2(26, "John Doe", "IT");
    cout << "inserted successfully" << endl;
    s2.print();
    
    return 0;
}