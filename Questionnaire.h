#ifndef QUESTIONNAIRE_H
#define QUESTIONNAIRE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Questionnaire {
private:
    vector<string> questions;
    vector<vector<string>> answers;
    vector<vector<int>> scores;

public:
    int askQuestions();
    void createQuestions();

};
#endif
