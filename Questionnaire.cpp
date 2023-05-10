#include <iostream>
#include <string>
#include "Questionaire.h"
#include <vector>
using namespace std;


class Questionaire {
public:
  int numProjects;
  int languageEXP;
  int yearsExperience;
  Questionaire(vector<int> answers) {
  numProjects = answers[0];
  languageEXP = answers[1];
  yearsExperience = answers[2];
}
  void askQuestions() {
    vector<vector<string>> questions_and_answers = {
        {"How many projects do you have?", "0", "1.", "2.", "3.", "4.", "4+"},
        {"Do you have any experience using Java, C++ , or Python?", 
         "1. I have experience using Java", 
         "2. I have experience using C++", 
         "3. I have experience using Python", 
         "4. I have experience using Java and C++", 
         "5. I have experience using Python and C++", 
         "6. I have experience using Java and Python", 
         "7. I have experience using C++ and Python",
         "8. I have experience using Java and Python and C++"},
        {"How many years of experience do you have as a software engineer?",
         "1. Less than one year",
         "2. One year",
         "3. Two years",
         "4. Three years",
         "5. Over three years",
         "6. No experience"}
    };

    vector<int> answers(3);

    for (int i = 0; i < questions_and_answers.size(); i++) { //prints the questions
        cout << questions_and_answers[i][0] << endl;

        for (int j = 1; j < questions_and_answers[i].size(); j++) { //takes answer into vector
            cout << questions_and_answers[i][j] << endl;
        }

        cin >> answers[i];
    }
  }
 void setNumProjects(int n) {
    numProjects = n;
  }

  int getNumProjects() {
    return numProjects;
  }

  void setLanguageEXP(int exp) {
    languageEXP = exp;
  }

  int getLanguageEXP() {
    return languageEXP;
  }

  void setYearsExperience(int y) {
    yearsExperience = y;
  }

  int getYearsExperience() {
    return yearsExperience;
  }
};
