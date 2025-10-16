#include <iostream>
#include <limits>
#include <iostream>
#include "student.h"
#include "teacher.h"
#include "course.h"

using namespace std;

void printMenu();

int main()
{
    bool running = true;

    while (running) {
        int option;

        printMenu();
        cout << "Please enter option (1-4): ";
        cin >> option;
    
        switch(option){
            case 1: running = studentMenu(); break;
            case 2: teacherMenu(); break;
            case 3: courseMenu(); break;
            case 4: running = false; break;
            default: cout << "Unknown option.\n"; break;
        }
    }

    cout << "Goodbye.\n";
    
    return 0;
}

void printMenu(){
    cout << "===================================" << endl;
    cout << "  School Management System        " << endl;
    cout << "===================================" << endl;
    cout << "1. Student Management             " << endl;
    cout << "2. Teacher Management             " << endl;
    cout << "3. Course Management              " << endl;
    cout << "4. Exit                           " << endl;
    cout << "===================================" << endl;
}

