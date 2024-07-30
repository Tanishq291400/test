#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
        string className;
        string division;
        string dateOfBirth;
        long long adharNumber;
        string bloodGroup;
        string contactAddress;
        long long telephoneNumber;
        static int count;

    public:
        void inputData() {
            cout << "Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> rollNumber;
            cout << "Enter class: ";
            cin.ignore();
            getline(cin, className);
            cout << "Enter division: ";
            getline(cin, division);
            cout << "Enter date of birth: ";
            getline(cin, dateOfBirth);
            cout << "Enter adhar number: ";
            cin >> adharNumber;
            cout << "Enter blood group: ";
            cin.ignore();
            getline(cin, bloodGroup);
            cout << "Enter contact address: ";
            getline(cin, contactAddress);
            cout << "Enter telephone number: ";
            cin >> telephoneNumber;
            count++;
        }

        void displayData() {
            cout << "Name: " << name << endl;
            cout << "Roll number: " << rollNumber << endl;
            cout << "Class: " << className << endl;
            cout << "Division: " << division << endl;
            cout << "Date of birth: " << dateOfBirth << endl;
            cout << "Adhar number: " << adharNumber << endl;
            cout << "Blood group: " << bloodGroup << endl;
            cout << "Contact address: " << contactAddress << endl;
            cout << "Telephone number: " << telephoneNumber << endl;
        }

        static void displayCount() {
            cout << "Total number of students: " << count << endl;
        }
};

int Student::count = 0;

int main() {
    int choice;
    Student students[100];
    int studentIndex = 0;

    while (true) {
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Display total number of students" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                students[studentIndex].inputData();
                studentIndex++;
                break;
            case 2:
                for (int i = 0; i < studentIndex; i++) {
                    students[i].displayData();
                    cout << endl;
                }
                break;
            case 3:
                Student::displayCount();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}