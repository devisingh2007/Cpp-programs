#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string onelinestatemen;
    ifstream file;

    file.open("hello.txt");

    if (file.is_open())
    {
        cout << "File opened successfully. Reading content:" << endl;
        cout << "==========================================" << endl;

        while (getline(file, onelinestatemen))
        {
            cout << onelinestatemen << endl;
        }
        
        cout << "==========================================" << endl;
        cout << "File reading completed successfully." << endl;
        file.close();
    }
    else
    {
        cerr << "Error: Could not open file 'hello.txt'" << endl;
        return 1;
    }
    
    return 0;
}