#include <iostream>
using namespace std;

class Employee{
    private:
        string name, gender;
        int basicSalary, allowances, netSalary;
        float taxRate, taxAmount;
    public:

    //DEFAULT CONSTRACTOR
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

    //PARAMETERISED CONSTRUCTOR
       Employee( string n, string g,int bs,int a,int ns,float tr, float ta)
       {
         name = n;
         gender = g;
         basicSalary = bs;
         allowances = a;
         netSalary = ns;
         taxRate = tr;
         taxAmount = ta;
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
        void computeNetSalary(){
            netSalary = basicSalary - taxAmount;
        }
        void displayDetails(){
               cout<<"------------------------"<<endl; 
          cout<<"Name: "<<name<<endl;
          cout<<"Gender: "<<gender<<endl;
          cout<<"Basic Salary: "<<basicSalary<<endl;
          cout<<"Allowances: "<<allowances<<endl;
          cout<<"Net Salary: "<<netSalary<<endl;
          cout<<"Tax Rate: "<<taxRate<<endl;
          cout<<"Tax Amount: "<<taxAmount<<endl;          
         
        }
};

int main(){
  //cout<<"----Default-----"<<endl;
    Employee newEmployee;
    newEmployee.getDetails();
    newEmployee.computeTaxRate();
    newEmployee.computeTaxAmount();
    newEmployee.computeNetSalary();
    newEmployee.displayDetails();

  //cout<<"----Parametised-----"<<endl;

//    Employee NewEmployee("Lucy","female",10000,2000,8000,20,2000);
//    NewEmployee.displayDetails();

}