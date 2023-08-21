#include <iostream>
using namespace std;


class module
{

public:
    //Setters
    string setModuleName(string name) { moduleName = name; return moduleName; }
    string setModuleCode(string code) { moduleCode = code; return moduleCode; }

    //Getter
    string getModuleName() { return moduleName; }
    string getModuleCode() { return moduleCode; }

public:
    string moduleName;
    string moduleCode;

    class assignment
    {
        private:
        string assignmentName;
        float assignmentMark;
        float assignmentWeight;
        public:
        void setAssignment(string name, int mark, float weight) 
        {
            assignmentName = name;
            assignmentMark = mark;
            assignmentWeight = weight;
            assignmentMark *= assignmentWeight;
        }
        
        int getAssessmentMark(float assessmentMark) { assessmentMark = assignmentMark; return assessmentMark; }
        float getAssignmentWeight() { return assignmentWeight; }

    };
};

int main()
{
    module Modules;
    Modules.setModuleName("Introduction to programming II");
    Modules.setModuleCode("COS1512");
    Modules::assignment Assignment;
    Assignment.setAssignment("COS1512", 125, 0.40);
    cout << Module.getModuleCode() << endl;
    cout << Module.getModuleName() << endl;
    return 0;
}
