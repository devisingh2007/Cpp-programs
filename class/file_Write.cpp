#include <iostream>
#include <fstream>
using namespace std;

// int main()
// {
//   char* data;
// ofstream file;

// file.open("sample.txt",ios::app);

// if(file.is_open())
// {

// fgets(data,100,stdin);
// file << data<<endl;
//   file.close();
// }
//     return 0;
// }

int main()
{
  ofstream enjoy;
  enjoy.open("enjoy.txt", ios::app);
  
  if (enjoy.is_open())
  {
    int numLines = 0;
    string data;
    cout << "Enter lines of text (type 'exit' to finish):\n";
    
    while (numLines < 10)
    {
      getline(cin, data);
      if (data == "exit")
        break;
      enjoy << data << endl;
      numLines++;
    }
    enjoy.close();
    cout << "File written successfully. " << numLines << " lines written." << endl;
  }
  else
  {
    cerr << "Error: Could not open file for writing" << endl;
  }
  
  return 0;
}