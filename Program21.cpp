//WAP in C++ for hybrid inheritance with respect to the university examination system//

#include <iostream>
using namespace std;
class University {
    protected:
        string universityName;
    public:
        void setUniversity(string name) { universityName = name; }
};
class Student : public University {
    protected:
        int studentID;
    public:
        void setStudent(int id) { studentID = id; }
};
class Exam : public Student {
    protected:
        int marks;
    public:
        void setExam(int m) { marks = m; }
};
class Result : public Exam {
    public:
        void displayResult() {
            cout << "University: " << universityName << "\nStudent ID: " << studentID << "\nMarks: " << marks << endl;
        }
};

int main() {
    Result studentResult;
    studentResult.setUniversity("Kolkata University");
    studentResult.setStudent(101);
    studentResult.setExam(85);
    studentResult.displayResult();
    return 0;
}

/*OUTPUT:-
University: Kolkata University
Student ID: 101
Marks: 85*/

