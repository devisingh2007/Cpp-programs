#include <iostream>
#include<string>

using namespace std;

class staticObject
{
public:
    static int count;

    int runcounter()
    {
        count++;
        cout << count;
        return 0;
    }
};
int staticObject ::count =0;


class employee
{
 private:
    string name;

 public:

    static int member;
    
    employee(string name)
    {
        this->name = name;
        member++;
    }
    
    string getName() const { return name; }
    static int getCount() { return member; }
 };
class config
{
    private: 
    static int value;

    public:

    static void setvalue(int v)
    {
        value=v;

    }
   static void getvalue()
    {
        cout<<"value is :"<<value<<endl;
    }

};

int config::value = 0;
int employee::member = 0;  // Static member initialization


int main()
{
    cout << "=== Static Members Demo ===" << endl;
    cout << "Initial employee count: " << employee::getCount() << endl;
    
    employee e1("Alice");
    cout << "After creating employee 1, count: " << employee::getCount() << endl;
    
    employee e2("Bob");
    cout << "After creating employee 2, count: " << employee::getCount() << endl;
    
    cout << "\n=== Config Static Example ===" << endl;
    config::setvalue(100);
    config::getvalue();
    
    return 0;
}