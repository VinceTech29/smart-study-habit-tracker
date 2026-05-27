#include <iostream>
#include <string>
using namespace std;

class StudySession {
public:
    string subject;
    int hours;
    string timeOfDay;

    void inputSession() {
        cout << "\nEnter Subject: ";
        cin.ignore();
        getline(cin, subject);

        cout << "Enter Study Hours: ";
        cin >> hours;

        cout << "Time of Study (Morning/Afternoon/Night): ";
        cin >> timeOfDay;
    }

    void displaySession() {
        cout << "\n===== STUDY SESSION =====";
        cout << "\nSubject: " << subject;
        cout << "\nHours: " << hours;
        cout << "\nTime: " << timeOfDay << endl;
    }
};

int main() {
    StudySession session;

    int choice;

    do {
        cout << "\n====== SMART STUDY HABIT TRACKER ======";
        cout << "\n1. Add Study Session";
        cout << "\n2. View Study Session";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                session.inputSession();
                break;

            case 2:
                session.displaySession();
                break;

            case 3:
                cout << "\nExiting Program...";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 3);

    return 0;
}