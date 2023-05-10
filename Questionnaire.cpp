#include <iostream>
#include <string>
#include "Questionnaire.h"
#include "Applicant.h"
#include <vector>
using namespace std;

void Applicant::addScore(int score){
  totalScore += score;
}

void Questionnaire::askQuestions(){
  int answer = 0;
  for(int i = 0; i < questions.size(); ++i){
    cout << questions[i] << endl;
    for(int j = 0; j < answers.size(); ++j){
      cout << j+1 << ". " << answers[i][j] << endl;
    }
    cin >> answer;
    if(answer >= 0 && answer < answers[i].size()){
      addScore(answer);
    }
    
  }
}

void Questionnaire::createQuestions(){
  string question;
  string answer;
  int score;

  int i = question.size();
  cout << "Type a question to ask or type 'exit' to quit." << endl;
  while(question != "exit"){
    questions[i][0].push_back(question);
    cout << "Type in answers for the questions, then the score given " 
         << "or type 'done' to create a new question" << endl;
    cin >> answer;

    while(answer != "done"){
      answers[i].push_back(answer);
      cin >> score;
      scores[i].push_back(score);
      
      cin >> answer;
    }
    cout << "Type a question to ask or type 'exit' to quit." << endl;
    cin >> question;
  }
}
