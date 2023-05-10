#include "Jobtitle.h"
#include <iostream>
using namespace std;

//the constructor for jobtitle
Jobtitle::Jobtitle(string name, string position, int score) {
    jobName = name;
    jobPosition = position;
    minScore = score;
}

//setter for job name
void Jobtitle::setJobName(string name) {
    jobName = name;
}

// setter for jobPosition
void Jobtitle::setPosition(string position) {
    jobPosition = position;
}

void Jobtitle::setMinScore(int score){
    minScore = score;
}

string Jobtitle::getAllInfo(){
    return (getJobName() + " " + getJobPosition() + " " + to_string(getMinScore()));
}