#include "Expense.h"
#include <iostream>

using namespace std;

//Constructor
Expense::Expense(double amt, const string cat, const string desc)
    : amount(amt), category(cat), description(desc) {}

    //Getters 
    double Expense::getAmount() const {
        return amount;
    }

    string  Expense::getCategory() const {
        return category;
    }

    string Expense::getDescription() const {
        return description;
    }

    //Display expense details
    void Expense::display() const {
        cout << "Amount: $" << amount
             << ", Category: " << category
             <<", Description" << description << endl;
    }