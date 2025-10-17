#include <iostream>
#include "student.h"
#include <vector>
#include <fstream>

using namespace std;
void addStudent(const string& studentFile);
void showAllStudents();
void removeStudent();
void studentGrade();


//for storing student records
struct Student{
    string name;
    string gender;
    int studentNumber;
};


void studentMenu(){

    int option;
    bool studentMenuRunning = true;
    string studentFile = "student.txt";

    while(studentMenuRunning){
    cout << "Welcome to student Menu" << endl;
    cout << "1.Add student" << endl;
    cout << "2.Show all students" << endl;
    cout << "3.Remove student" << endl;
    cout << "4.Student grade" << endl;
    cout << "5.Exit" << endl;

    cout << "Please enter option: " << endl;
    cin >> option;


    //get user input
    switch(option){
            case 1:  addStudent(studentFile); break;
            case 2:  showAllStudents(); break;
            case 3:  removeStudent(); break;
            case 4:  studentGrade(); break;
            case 5:  studentMenuRunning = false;break;
            default: cout << "Unknown option.\n"; break;
        }
        studentMenuRunning = false;
    }
    

}

void addStudent(const string& studentFile){


    //overwrite file 
    ofstream File(studentFile, ios::app);

    // Get user input for number of students
    int numStudents;
    cout << "Enter number of students to add: ";
    cin >> numStudents;
    cin.ignore(); 

    // Create a vector to store student information
    vector<Student> students(numStudents);

    for(int i = 0; i < numStudents; i++){
        //Entering student information , sabing in vector to later save into a file
        cout << "Enter student name and surname :";
        getline(cin, students[i].name);

        cout << "Enter student number :";
        cin >> students[i].studentNumber;
        cin.ignore();
        cout << "Enter student gender :";
        cin >> students[i].gender;
        cin.ignore();

        //Writing student information into the file
        File << students[i].name << ","
         << students[i].studentNumber << "," 
         << students[i].gender << "\n";
    }
    File.close();

}

void showAllStudents(){

}

void removeStudent(){ 
    
}

void studentGrade(){

}
