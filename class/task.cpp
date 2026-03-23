#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void fibonacci(int num, ofstream &task) {
    int a = 0, b = 1;
    task << a << endl << b << endl;
    for (int i = 2; i < num; i++) {
        int next = a + b;
        task << next << endl;
        a = b;
        b = next;
    }
}

void file() {
    ofstream task("task_by_filehandling.txt", ios::app);
    
    if (!task.is_open()) {
        cerr << "Error: Could not open file for writing" << endl;
        return;
    }
    
    int num;
    cout << "Enter some number: ";
    cin >> num;

    if (num > 1) {
        fibonacci(num, task);
        cout << "Fibonacci sequence written to file." << endl;
    } else {
        cerr << "Error: Please enter a number greater than 1" << endl;
    }
    
    task.close();
}

int main()
{
    file();
    return 0;
}

/*
Original commented code:
     int num;
     cout<<"enter some number : ";
     cin>>num;

     if(num>0)
     {
         if(num%2==0)
         cout<<"number is positive and even ";
         else
         cout<<"number is positive and odd ";
     }
     else if(num<0)
     {
         if(num%2==0)
         cout<<"number is negative and even ";
         else
         cout<<"number is negative and odd ";

     }
     else
     {
         cout<<"number is zero ";

     }
         // task 2-------------------------------------------------------------------------------------

          int num;
     cout<<"enter some number : ";
     cin>>num;

     int pen=num;
     int check=0;

     while(num!=0)
     {
 check=num%10+check*10;
 num=num/10;

     }

     if(check==pen)
              cout<<"number is pelindrome ";
         else
         cout<<"number is  not pelindrome "<<check;
         // task 3-------------------------------------------------------
         int arr[5];
         float avg = 0;
         int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("enter data of index %d", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > avg)
        {
            cout<<"the student "<<i+1<<"have marks Greter than average";
        }
    }
    */




