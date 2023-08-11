#include <iostream>
using namespace std;
class ExamType
{
public:
    ExamType();
    ExamType(string m, string v, int t, string d);
public:
    string module;
    string venue;
    int time;
    string date;
};

int main()
{
    ExamType exams[12];
    for (int i = 0; i < 12; i++)
        if (exams[i].module == "COS1512")
            cout << "COS1512 will be written on " << exams[i].date << " at " << exams[i].time;
    return 0;
}

