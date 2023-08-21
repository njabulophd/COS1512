#include <iostream>

using namespace std;

class Date{
public:
    //constructors
    Date();
    Date(int day, int month, int year)
    {
        day = 14;
        month = 09;
        year = 1752;

    }
    //accessors
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    //mutators
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
    //operators to calculate next and previous days
    Date &operator++();
    Date &operator--();
    bool operator<(const Date &d);
private:
    //the current day month and year
    int theday;
    int themonth;
    int theyear;
    //return the length of current month, taking into
    //account leap years
    int monthLength();
};


int main()
{
	Date nowDate;
	std::cout << nowDate << std::endl;
	return 0;
}
