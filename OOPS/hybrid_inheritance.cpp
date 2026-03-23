#include<iostream>

using namespace std;

// Base class
class A{
    public:
    
      void display(){
          cout << "The class A is the base parent class" << endl;
      }
};

// Child class 1 - uses virtual inheritance to avoid diamond problem
class B : virtual public A{
    public:
    
      void display(){
          cout << "The class B is a child class of parent class A" << endl;
      }
};

// Child class 2 - uses virtual inheritance to avoid diamond problem
class C : virtual public A{
    public:
    
      void display(){
          cout << "The class C is a child class of parent class A" << endl;
      }
};

// Child class 3 - Multiple inheritance from B and C (Hybrid Inheritance)
// Virtual inheritance prevents the Diamond Problem
class D : public B, public C {
    public:
    
      void display(){
          cout << "The class D is a child class of parent classes B and C" << endl;
          cout << "Class D demonstrates hybrid inheritance with virtual base" << endl;
      }
};

int main(){
    
    cout << "=== Hybrid Inheritance Demo (With Virtual Inheritance) ===" << endl << endl;
    
    cout << "Creating object of class D:" << endl;
    D d1;
    
    cout << "\nCalling display() method:" << endl;
    d1.display();
    
    cout << "\nCalling parent class B's display():" << endl;
    B* b_ptr = &d1;
    b_ptr->display();
    
    cout << "\nCalling parent class C's display():" << endl;
    C* c_ptr = &d1;
    c_ptr->display();
    
    cout << "\nCalling grandparent class A's display():" << endl;
    A* a_ptr = &d1;
    a_ptr->display();
    
    return 0;
}
