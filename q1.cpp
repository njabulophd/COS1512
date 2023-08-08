#include <iostream>

using namespace std;

//Some Class
class worker
{
public:
	string firstName;
	string surName;
	float salary;
	worker() { firstName = "Jane"; surName = "Doe"; salary = 0.00; }
	worker(string w_name, string w_surname, float w_salary)
	{

	}
	//Setter Member Function
	string setName(string s_name) { firstName = s_name; return firstName; }
	string setSurname(string s_surname) { surName = s_surname; return surName; }
	float setSalary(float s_salary) { salary = s_salary; return salary; }

	//Getter Member Function
	string getName() { return firstName; }
	string getSurname() { return surName; }
	float getSalary() { return salary; }
};

int main()
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
	std::cout << worker1.getName() << ", " << worker1.getSurname() << "\n" << "R " << worker1.getSalary() << "\n";
	cin.get();

	return 0;
}