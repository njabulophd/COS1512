#include "print.hpp"

using namespace std;
//Employee raise function
float raise(float salary)
{
	salary *= 1.10;
	return salary;
}
float raise()
{
	float getterG = 100.129;
	return 0.0;
}
//Some Class
class worker
{
private:
	string firstName;
	string surName;
	float salary;
public:

	worker() { firstName = ""; surName = ""; salary = 0.00; }
	worker(string w_name, string w_surname, float w_salary)
	{
		w_name = "John";
		w_surname = "Doe";
		w_salary = 0.01;

	}
	//Setter Member Function
	string setName(string s_name) { firstName = s_name; return firstName; }
	string setSurname(string s_surname) { surName = s_surname; return surName; }
	float setSalary(float s_salary) { salary = s_salary; return salary; }

	//Getter Member Function
	string getName() { return firstName; }
	string getSurname() { return surName; }
	float getSalary() { return salary; }

	//default function for data
	static float Default()
	{
		worker employee1;
		employee1.setName("Joe");
		employee1.setSurname("Soap");
		employee1.setSalary(145600.66);
		
		print3(employee1.getName(), ", ", employee1.getSurname());

		return employee1.getSalary();
	}

	//user function to input data
	float user()
	{
		worker worker1;
		cout << "Enter name:\n";
		string usr_Name;
		cin >> usr_Name;
		worker1.setName(usr_Name);
		string usr_Surname;
		cout << "Enter Surname\n";
		std::cin >> usr_Surname;
		float salary;
		cout << "Enter salary\n";
		cin >> salary;
		worker1.setSalary(salary);
		worker1.setSurname(usr_Surname);
		std::cout << worker1.getName() << ", " << worker1.getSurname() << "\n";
		return worker1.getSalary();
	}
};

int main()
{
	worker defaultEmployee;
	
	float rayse = defaultEmployee.Default();
	cout << "get salary raise: " << rayse << "\n";
	cout << rayse << "\n" << raise(rayse)<< "\n";
	worker Employee;
	float userSalary = Employee.user();
	cout << "User salary raise: " << raise(userSalary) << "\n";
	
	cin.get();

	return 0;
}