//wap to implement multi-level inheritance with respect to the student registration//

#include <iostream>
using namespace std;

class Student {
    protected:
        int studentID;
        string name;

    public:
        void setStudentDetails(int id, string n) {
            studentID = id;
            name = n;
        }

        void displayStudentDetails() {
            cout << "Student ID: " << studentID << endl;
            cout << "Name: " << name << endl;
        }
};

class AcademicDetails : public Student {
    protected:
        string course;
        int year;

    public:
        void setAcademicDetails(string c, int y) {
            course = c;
            year = y;
        }

        void displayAcademicDetails() {
            cout << "Course: " << course << endl;
            cout << "Year: " << year << endl;
        }
};

class Registration : public AcademicDetails {
    private:
        int registrationNumber;

    public:
        void setRegistrationDetails(int regNum) {
            registrationNumber = regNum;
        }

        void displayRegistrationDetails() {
            displayStudentDetails();
            displayAcademicDetails();
            cout << "Registration Number: " << registrationNumber << endl;
        }
};

int main() {
    Registration student;

    student.setStudentDetails(101, "Alice");
    student.setAcademicDetails("Computer Science", 1);
    student.setRegistrationDetails(2023001);  
    cout << "Student Registration Details:" << endl;
    student.displayRegistrationDetails();

    return 0;
}
