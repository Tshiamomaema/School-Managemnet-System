#include <iostream>
#include "student.h"

using namespace std;
void addStudent();




struct Student{
    string name;
    string gender;
    int age;
    int studentNumber;
    string gender;
    

};
void studentMenu(){

    int option;
    bool studentMenuRunning = true;

    while(studentMenu){
    cout << "Wlecome to student Menu" << endl;
    cout << "1.Add student" << endl;
    cout << "2.Show all students" << endl;
    cout << "3.Remove student" << endl;
    cout << "4.Exit" << endl;

    cout << "Please enter option: " << endl;

    switch(option){
            case 1:  addStudent(); break;
            case 2:  break;
            case 3: break;
            case 4:  break;
            default: cout << "Unknown option.\n"; break;
        }
    }

}

void addStudent(){
    
}
