#include <iostream>
#include<map>
#include<fstream>

using namespace std;

map<string, int> m1 = {
    {"Add", 0},
    {"Sub", 0},
    {"Mul", 0},
    {"Div", 0}
};


void fileOperation(int a, int b, double result, string oper){
    cout << "The write opration is initiated.." << endl;
    
    ofstream file;
    file.open("Practice.txt", ios::app);
    
    if(file.is_open()){
        // Log timestamp
        cout << "[LOG] Operation recorded at: " << __DATE__ << " " << __TIME__ << endl;
        
        file << "The actual operator is->  " << oper << endl;
        file << "The value of a: " << a << " and the value of b is: " << b << endl;
        file << "The result is: " << result << endl<<endl;
    }
    else{
        cout << "[ERROR] Could not open file for writing!" << endl;
    }
    file.close();
}

class Add{
    
    //Function members...
    
    public:
    
    
      void add(int a, int b){
          cout << "The addition of two number is:  " << a+b << endl;
          cout << "The fileOperation got called pls wait for some moments to append the information" << endl;
          fileOperation(a, b, a+b, "+");
          cout << "The fileOperation is done without any error"<<endl;
          cout << "The frequency is been traced..." << endl;
          m1["Add"]++;
      }
    
};

class Sub{
    //Function members...
    
    public:
    
      void sub(int a, int b){
          cout << "The subtraction of two number is:  " << a-b << endl;
          cout << "The fileOperation got called pls wait for some moments to append the information" << endl;
          fileOperation(a, b, a-b, "-");
          cout << "The fileOperation is done without any error"<<endl;
          cout << "The frequency is been traced..." << endl;
          m1["Sub"]++;
      }

};

class Mul{
    //Function members...
    
    public:
    
      void mul(int a, int b){
          cout << "The multiplication of two number is:  " << a*b << endl;
          cout << "The fileOperation got called pls wait for some moments to append the information" << endl;
          fileOperation(a, b, a*b, "*");
          cout << "The fileOperation is done without any error"<<endl;
          cout << "The frequency is been traced..." << endl;
          m1["Mul"]++;

      }
   
};

class Div{
    //Function members...
    
    public:
    
      void divison(int a, int b){
          if(b != 0){
                double result = (double)a / b;
                cout << "The division of two number is:  " << result << endl;
                cout << "The fileOperation got called pls wait for some moments to append the information" << endl;
                fileOperation(a, b, result, "/");
                cout << "The fileOperation is done without any error"<<endl;
               cout << "The frequency is been traced..." << endl;
               m1["Div"]++;

          }
          else{
              cout << "The second number must be more than 0" << endl;
          }
      }
   
};

class Cal : public Add, public Sub, public Mul, public Div{
    
    // Function members....
    
    public:
    void display(){
        cout << "The Calculator display function got called " << endl;
        cout << "\nOperation Usage Frequency:" << endl;
        cout << "  Addition (Add): " << m1["Add"] << " times" << endl;
        cout << "  Subtraction (Sub): " << m1["Sub"] << " times" << endl;
        cout << "  Multiplication (Mul): " << m1["Mul"] << " times" << endl;
        cout << "  Division (Div): " << m1["Div"] << " times" << endl;
        cout << "  Total Operations: " << (m1["Add"] + m1["Sub"] + m1["Mul"] + m1["Div"]) << endl;
        cout << "\nAll results have been written to Practice.txt" << endl;
    }
};

int main()
{
    cout<<"======================================" << endl;
    cout<<"   CALCULATOR APPLICATION STARTED     " << endl;
    cout<<"======================================" << endl << endl;
    
    Cal c1;
    
    // Test Addition
    cout << "\n--- TEST 1: ADDITION ---" << endl;
    c1.add(50, 30);
    
    // Test Subtraction
    cout << "\n--- TEST 2: SUBTRACTION ---" << endl;
    c1.sub(100, 45);
    
    // Test Multiplication
    cout << "\n--- TEST 3: MULTIPLICATION ---" << endl;
    c1.mul(10, 20);
    
    // Test Division
    cout << "\n--- TEST 4: DIVISION ---" << endl;
    c1.divison(100, 4);
    
    // Test Division by zero
    cout << "\n--- TEST 5: DIVISION BY ZERO (ERROR HANDLING) ---" << endl;
    c1.divison(50, 0);
    
    // Display frequency statistics
    cout << "\n======================================" << endl;
    cout<<"   OPERATION FREQUENCY STATISTICS     " << endl;
    cout<<"======================================" << endl;
    c1.display();
    
    return 0;
}