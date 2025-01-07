
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const string STUDENT_FILE = "students.txt";
const string TEACHER_FILE = "teachers.txt";

// Define the Student structure
struct Student
{
    string rollNumber;
    string name;
    int age;
    string address;
};

// Define the Teacher structure
struct Teacher
{
    string id;
    string name;
    int age;
    string subject;
};

// Function to add a student
void addStudent()
{
    ofstream file(STUDENT_FILE, ios::app); // Open the file in append mode
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }

    Student student;
    cout << "Enter Roll Number: ";
    cin >> student.rollNumber;
    cout << "Enter Name: ";
    cin.ignore(); // Ignore the newline character in the input buffer
    getline(cin, student.name);
    cout << "Enter Age: ";
    cin >> student.age;
    cout << "Enter Address: ";
    cin.ignore();
    getline(cin, student.address);

    file << student.rollNumber <<endl<< student.name <<endl<< student.age <<endl<< student.address << endl; // Write student data to the file

    file.close();
    cout << "Student record added successfully." << endl;
}

// Function to search for a student
void searchStudent()
{
    ifstream file(STUDENT_FILE);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }

    string rollNumber;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    Student student;
    bool found = false;

    while (file >> student.rollNumber >> student.name >> student.age >> student.address)
    {
        if (student.rollNumber == rollNumber)
        {
            cout << "Student Details:" << endl;
            cout << "Roll Number: " << student.rollNumber << endl;
            cout << "Name: " << student.name << endl;
            cout << "Age: " << student.age << endl;
            cout << "Address: " << student.address << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student not found." << endl;
    }

    file.close();
}

// Function to delete a student
void deleteStudent()
{
    ifstream file(STUDENT_FILE);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }

    string rollNumber;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    Student student;
    ofstream temp("temp.txt"); // Create a temporary file

    bool found = false;

    while (file >> student.rollNumber >> student.name >> student.age >> student.address)
    {
        if (student.rollNumber != rollNumber)
        {
            temp << student.rollNumber <<endl<< student.name <<endl<< student.age <<endl<< student.address << endl; // Write student data to the temporary file
        }
        else
        {
            found = true;
        }
    }

    file.close();
    temp.close();

    if (found)
    {
        remove(STUDENT_FILE.c_str());             // Remove the original file
        rename("temp.txt", STUDENT_FILE.c_str()); // Rename the temporary file to the original file name
        cout << "Student record deleted successfully." << endl;
    }
    else
    {
        remove("temp.txt"); // Remove the temporary file
        cout << "Student not found." << endl;
    }
}

// Function to display all students
void showAllStudents()
{
    ifstream file(STUDENT_FILE);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }

    Student student;
    cout << "All Student Records:" << endl;
    cout << setw(15) << "Roll Number"<< setw(20) << "Name" << setw(10) << "Age" << setw(30) << "Address" << endl;
    while (file >> student.rollNumber >> student.name >> student.age >> student.address)
    {
        cout << setw(15) << student.rollNumber << setw(20) << student.name<< setw(10) << student.age << setw(30) << student.address << endl;
    }

    file.close();
}

// Function to add a teacher
void addTeacher()
{
    ofstream file(TEACHER_FILE, ios::app);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }
    Teacher teacher;
    cout << "Enter ID: ";
    cin >> teacher.id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, teacher.name);
    cout << "Enter Age: ";
    cin >> teacher.age;
    cout << "Enter Subject: ";
    cin.ignore();
    getline(cin, teacher.subject);

    file << teacher.id << "," << teacher.name << "," << teacher.age << "," << teacher.subject << endl;

    file.close();
    cout << "Teacher record added successfully." << endl;
}

// Function to search for a teacher
void searchTeacher()
{
    ifstream file(TEACHER_FILE);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }

    string id;
    cout << "Enter ID: ";
    cin >> id;

    Teacher teacher;
    bool found = false;

    while (file >> teacher.id >> teacher.name >> teacher.age >> teacher.subject)
    {
        if (teacher.id == id)
        {
            cout << "Teacher Details:" << endl;
            cout << "ID: " << teacher.id << endl;
            cout << "Name: " << teacher.name << endl;
            cout << "Age: " << teacher.age << endl;
            cout << "Subject: " << teacher.subject << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Teacher not found." << endl;
    }

    file.close();
}

// Function to delete a teacher
void deleteTeacher()
{
    ifstream file(TEACHER_FILE);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }
    string id;
    cout << "Enter ID: ";
    cin >> id;

    Teacher teacher;
    ofstream temp("temp.txt");

    bool found = false;

    while (file >> teacher.id >> teacher.name >> teacher.age >> teacher.subject)
    {
        if (teacher.id != id)
        {
            temp << teacher.id << "," << teacher.name << "," << teacher.age << "," << teacher.subject << endl;
        }
        else
        {
            found = true;
        }
    }

    file.close();
    temp.close();

    if (found)
    {
        remove(TEACHER_FILE.c_str());
        rename("temp.txt", TEACHER_FILE.c_str());
        cout << "Teacher record deleted successfully." << endl;
    }
    else
    {
        remove("temp.txt");
        cout << "Teacher not found." << endl;
    }
}

// Function to display all teachers

void showAllTeachers()
{
    ifstream file(TEACHER_FILE);
    if (!file)
    {
        cout << "Error opening file. Please try again." << endl;
        return;
    }
    Teacher teacher;
    cout << "All Teacher Records:" << endl;
    cout << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Age" << setw(20) << "Subject" << endl;

    while (file >> teacher.id >> teacher.name >> teacher.age >> teacher.subject)
    {
        cout << setw(10) << teacher.id << setw(20) << teacher.name << setw(10) << teacher.age << setw(20) << teacher.subject << endl;
    }
    file.close();
}

int main()
{
    int choice;
    do
    {
        cout << endl << "------------------------------------" << endl;
        cout << "***** School Management System *****" << endl;
        cout << "------------------------------------" << endl << endl;

        cout << "1. Add Student" << endl;
        cout << "2. Search Student" << endl;
        cout << "3. Delete Student" << endl;
        cout << "4. Show All Students" << endl << endl;
        cout << "5. Add Teacher" << endl;
        cout << "6. Search Teacher" << endl;
        cout << "7. Delete Teacher" << endl;
        cout << "8. Show All Teachers" << endl;
        cout << "9. Exit" << endl << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            searchStudent();
            break;
        case 3:
            deleteStudent();
            break;
        case 4:
            showAllStudents();
            break;
        case 5:
            addTeacher();
            break;
        case 6:
            searchTeacher();
            break;
        case 7:
            deleteTeacher();
            break;
        case 8:
            showAllTeachers();
            break;
        case 9:
            cout << "Thank you for using the School Management System." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;
    } while (choice != 9);

    return 0;
}

