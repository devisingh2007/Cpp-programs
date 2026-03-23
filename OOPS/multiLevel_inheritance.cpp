#include<iostream>
#include<string>

using namespace std;

class Parent{
    public:
    //Data members....
        string parentName;
        int parentValue;
          
    // Constructor....
        Parent(string parentName, int parentValue){
              cout << "The Parent constructor is called first in hierarchy" << endl;
              this->parentName = parentName;
              this->parentValue = parentValue;
              cout << "Parent initialization done..." << endl;
          }
          
    // Function members...
        void displayParent(){
              cout << "Parent Name:  " << this->parentName << " | Parent Value: " << this->parentValue << endl;
          }
};

class Parent2 : public Parent{
    public:
    //Data members....
        string parent2Name;
        int parent2Value;
          
    // Constructor....
        Parent2(string parentName, string parent2Name, int parentValue, int parent2Value): Parent(parentName, parentValue){
              cout << "The Parent2 constructor is called during the inheritance chain" << endl;
              this->parent2Name = parent2Name;
              this->parent2Value = parent2Value;
              cout << "Parent2 initialization done..." << endl;
          }
          
    // Function members...
        void displayParent2(){
              cout << "Parent2 Name: " << this->parent2Name << " | Parent2 Value: " << this->parent2Value << endl;
          }
};


class Child : public Parent2{
    public:
    //Data members....
        string childName;
          
    // Constructor....
        Child(string childName, string parentName, string parent2Name, int parentValue, int parent2Value): Parent2(parentName, parent2Name, parentValue, parent2Value){
              cout << "The Child constructor is called after parent constructors are called" << endl;
              this->childName = childName;
              cout << "Child initialization done..." << endl;
          }
          
    // Function members...
        void displayChild(){
              cout << "Child Name: " << this->childName << endl;
          }
        
        void displayAll(){
              cout << "\n=== Complete Hierarchy Display ===" << endl;
              displayParent();
              displayParent2();
              displayChild();
          }
};


int main(){
    
    cout << "=== multilevel Inheritance Demo ===" << endl << endl;
    
    Child c1("ChildObject", "ParentData", "Parent2Data", 34, 56);
    c1.displayAll();
    
    return 0;
}