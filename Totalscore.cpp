#include "Questionnaire.h"
#include <string>
#include <iostream>
using namespace std;
// would require a getScore() function to exist in Questionnaire.cpp
int calculateTotalScore(const vector<Question> &questions){
  int totalScore = 0;
  for (const Question & q : questions){
    totalScore += q.getScore();
  }
  return totalScore;
}
