#include <iostream>
using namespace std;

class Employee {
    private:
        string name;
        string emp_id;

    public:
        Employee(string name, string emp_id) {
            this->name = name;
            this->emp_id = emp_id;
        }

        string getName() {
            return name;
        }

        string getEmp_ID() {
            return emp_id;
        }
};

class FullTime : public Employee {
    private:
        double salary;
    
    public:
        FullTime(string name, string emp_id, double salary) : Employee(name, emp_id) {
            this->salary = salary;
        }

        double getSalary() {
            return salary;
        }
};

class PartTime : public Employee {
    private:
        double daily_wages;
    
    public:
        PartTime(string name, string emp_id, double daily_wages):Employee(name, emp_id) {
            this->daily_wages = daily_wages;
        }

        double getDaily_Wages() {
            return daily_wages;
        }
};

int main() {

    FullTime fulltime("Afzal", "STL225826", 13000.350);
    PartTime parttime("Reshma", "STL76564", 350.100);

    cout << "Salary Of " << fulltime.getName() << " is " << fulltime.getSalary() << endl;
    cout << "Daily Wages Of " << parttime.getName() << " is " << parttime.getDaily_Wages() << endl;
    return 0;
}