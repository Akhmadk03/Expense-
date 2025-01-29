#include <iostream>
#include <vector>
#include "Expense.h"

using namespace std;

// Function prototypes
void displayMenu();
void addExpense(vector<Expense>& expenses);
void viewExpenses(const vector<Expense>& expenses);

int main() {
    vector<Expense> expenses;
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            addExpense(expenses);
            break;
        case 2:
            viewExpenses(expenses);
            break;
        case 3:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again!" << endl;
        }
    } while (choice != 3);

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\n===== Expense Tracker =====" << endl;
    cout << "1. Add Expense" << endl;
    cout << "2. View Expenses" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

// Function to add an expense
void addExpense(vector<Expense>& expenses) {
    double amount;
    string category, description;

    cout << "Enter amount: ";
    cin >> amount;

    cin.ignore(); // To handle the newline character
    cout << "Enter category (e.g., Food, Rent, Transport): ";
    getline(cin, category);

    cout << "Enter description: ";
    getline(cin, description);

    expenses.emplace_back(amount, category, description);
    cout << "Expense added successfully!" << endl;
}

// Function to view all expenses
void viewExpenses(const vector<Expense>& expenses) {
    if (expenses.empty()) {
        cout << "No expenses to display." << endl;
        return;
    }

    cout << "\n=== Your Expenses ===" << endl;
    for (size_t i = 0; i < expenses.size(); ++i) {
        cout << i + 1 << ". ";
        expenses[i].display();
    }
}
