#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

using namespace std;

class Expense {
    private:
        double amount;
        string category;
        string description;

    public:
        //Constructor
        Expense(double amt, const string cat, const string desc);

        //Getters
        double getAmount() const;
        string getCategory() const;
        string getDescription() const;

        //Display Method
        void display() const;
        
};

#endif