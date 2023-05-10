#pragma once
#include <string>
#include <vector>
#include <iostream>
#ifndef JOBTITLE_H
#define JOBTITLE_H

using namespace std;

class Jobtitle {
private:
	string jobName;
	string jobPosition;

public:
	Jobtitle(string name, string position);
	void setJobName(string name);
	void setPosition(string position);

	string getJobName() { return (jobName); }
	string getJobPosition() { return (jobPosition); }
};
#endif
