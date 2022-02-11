#include <iostream>
#include <iomanip>
#include "Employee.h"

using namespace std;

  Employee()
       {
         name = "Peter";
         gender = "male";
         basicSalary = 0;
         allowances = 0;
         netSalary = 0;
         taxRate = 0;
         taxAmount = 0;

       }
       
        void getDetails(){
            cout<<"Enter employee name"<<endl;
            cin>>name;
            cout<<"Enter employee salary"<<endl;
            cin>>basicSalary;
            cout<<"Enter employee total allowances"<<endl;
            cin>>allowances;
            cout<<"Enter employee gender"<<endl;
            cin>>gender;
        }

          void computeTaxRate(){
            if(gender == "female"){
                if(basicSalary < 15000.00){
                    taxRate = 12.00/100.00;
                }else{
                    taxRate= 14.00/100.00;
                }
            }else{
                if(basicSalary < 14000.00){
                    taxRate = 13.00/100.00;
                }
                else{
                    taxRate = 15.00/100.00;
                }
            }
        }

        void computeTaxAmount(){
            taxAmount = taxRate*(basicSalary+allowances);
        }