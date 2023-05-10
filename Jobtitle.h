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
	int minScore;

public:
	Jobtitle(string name, string position, int score);
	void setJobName(string name);
	void setPosition(string position);
	void setMinScore(int score);

	string getAllInfo();
	string getJobName() { return (jobName); }
	string getJobPosition() { return (jobPosition); }
	int getMinScore(){return (minScore);}
};
#endif
