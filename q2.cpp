#include <iostream>
using namespace std;
class module
{
private:
    //Strings that store  module name and module code
    string moduleName;
    string moduleCode;
    float yearMark, assignmentMark;
    int finalMark;
public:
    //Functions used to set module name and code
    string setName(string moduleName) { return moduleName; }
    string setCode(string moduleCode) { return moduleCode; }
    //
    int assignment(int assignmentCount, int totalPerAssignment, float assignmentWeight)
    {
        float marks = (assignmentCount * totalPerAssignment);
        float assignmentTotals = marks * assignmentWeight;
        return assignmentTotals;
    }
    //function to set final mark
    int setFinalMark(float yearMark, float assignmentMark) {return (assignmentMark + yearMark); }
};