#include <iostream>
using namespace std;

int main() {
    int book_id;
    int days_overdue;
    float fine;
    string due_date;
    string return_date;

    cout << "Enter the book ID: ";
    cin >> book_id;

    cout << "Enter the due date (DD/MM/YYYY): ";
    cin >> due_date;

    cout << "Enter the return date (DD/MM/YYYY): ";
    cin >> return_date;

    // Calculate the number of days overdue
    // (This part is not included in the provided code as it requires parsing the dates and calculating the difference)
    // days_overdue = calculate_days_overdue(due_date, return_date);

    if (days_overdue <= 7) {
        fine = days_overdue * 20;
    } else if (days_overdue <= 14) {
        fine = days_overdue * 50;
    } else {
        fine = days_overdue * 100;
    }

    cout << "The fine for book ID " << book_id << " is Ksh. " << fine << endl;

    return 0;
}