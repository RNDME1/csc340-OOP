#include "Jobtitle.h"
#include <iostream>
using namespace std;

//the constructor for jobtitle
Jobtitle::Jobtitle(string name, string position) {
    jobName = name;
    jobPosition = position;
}

//setter for job name
void Jobtitle::setJobName(string name) {
    
}

// setter for jobPosition
void Jobtitle::setPosition(string position) {
    jobPosition = position;
}
