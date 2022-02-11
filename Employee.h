/* Header for Employee class (Employee.h) */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
    private:
        string name,gender;
        int basicSalary,allowance,netSalary;
        float taxRate, taxAmount;
    
    public:
        void getDetails();
        void computeTaxRate();
        void computeTaxAmount();
        void computeNetSalary();
        void displayDetails();
};

#endif

