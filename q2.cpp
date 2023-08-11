#include <iostream>
using namespace std;


class module
{
private:
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
            assignmentWeight = weight
            assignmentMark *= assignmentWeight;
        }
        
        int getAssessmentMark(float assessmentMark) { assessmentMark = assignmentMark; return assessmentMark; }

    }

public:
    //Setters
    setModuleName(string name) { moduleName = name; return moduleName; }
    setModuleCode(string code) { moduleCode = code; return moduleCode; }

    //Getter
    getModuleName() { return moduleName; }
    getModuleCode() { return moduleCode; }



}
