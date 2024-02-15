#include <iostream>

struct Student {
    int rollNo;
    int marks;
    Student* next;
};

Student* head = nullptr;
Student* tail = nullptr;

void addStudent() {
    int rollNo, marks;

    std::cout << "Enter Roll No: ";
    std::cin >> rollNo;

    std::cout << "Enter Marks: ";
    std::cin >> marks;

    // Create a new student node
    Student* newStudent = new Student;
    newStudent->rollNo = rollNo;
    newStudent->marks = marks;
    newStudent->next = nullptr;

    if (head == nullptr) {
        head = newStudent;
        tail = newStudent;
    } else {
        tail->next = newStudent;
        tail = newStudent;
    }
}

Student* findStudentWithZeroMarks() {
    Student* current = head;

    while (current != nullptr) {
        if (current->marks == 0) {
            return current;
        }
        current = current->next;
    }

    return nullptr; // No student with zero marks found
}

void displayStudents() {
    Student* current = head;

    if (head == nullptr) {
        std::cout << "List is empty\n";
        return;
    }

    std::cout << "Students:\n";
    while (current != nullptr) {
        std::cout << "Roll No: " << current->rollNo << ", Marks: " << current->marks << std::endl;
        current = current->next;
    }
}

int main() {
    int numStudents;

    std::cout << "Enter number of students: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        addStudent();
    }

    displayStudents();

    Student* studentWithZeroMarks = findStudentWithZeroMarks();
    if (studentWithZeroMarks != nullptr) {
        std::cout << "Student with zero marks: Roll No: " << studentWithZeroMarks->rollNo << std::endl;
    } else {
        std::cout << "No student with zero marks found.\n";
    }

    return 0;
}
