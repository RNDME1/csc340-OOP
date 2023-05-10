#include "Questionnaire.h"
#include <string>
#include <iostream>
using namespace std;

int calculateTotalScore(const vector<Question> &questions){
  int totalScore = 0;
  for (const Question & q : questions){
    totalScore += q.getScore();
  }
  return totalScore;
}
