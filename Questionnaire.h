#ifndef QUESTIONNAIRE_H
#define QUESTIONNAIRE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Questionnaire {
private:
  int numProjects;
  int languageEXP;
  int yearsExperience;
  vector<int> answers;

public:
  void askQuestions();
};
#endif
