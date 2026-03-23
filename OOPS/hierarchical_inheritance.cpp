#include<iostream>

using namespace std;

// Parent class demonstrating hierarchical inheritance
class Lenovo{
    // Function members....
    public:
    
      void display(){
          cout << "The Lenovo class is a parent class" << endl;
      }
};

// Child class 1 - inherits from Lenovo
class Legion : public Lenovo{
    public:
    
      // Override parent's display method
      void display(){
          cout << "The Legion class is a child class of Lenovo parent class" << endl;
          cout << "Legion specializes in high-performance gaming laptops" << endl;
      }
};

// Child class 2 - inherits from Lenovo
class Yoga :  public Lenovo{
    public:
    
      // Override parent's display method
      void display(){
          cout << "The Yoga class is a child class of Lenovo parent class" << endl;
          cout << "Yoga specializes in flexible 2-in-1 convertible devices" << endl;
      }
};

// Child class 3 - inherits from Lenovo
class Loq : public Lenovo{
    public:
    
      // Override parent's display method
      void display(){
          cout << "The Loq class is a child class of Lenovo parent class" << endl;
          cout << "Loq specializes in budget-friendly gaming laptops" << endl;
      }
};

int main(){
    
    cout << "=== Hierarchical Inheritance Demo ===" << endl << endl;
    
    Legion l1;
    cout << "Legion object: ";
    l1.display();
    cout << endl;
    
    Yoga y1;
    cout << "Yoga object: ";
    y1.display();
    cout << endl;
    
    Loq l2;
    cout << "Loq object: ";
    l2.display();
    
    return 0;
}
