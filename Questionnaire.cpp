#include <iostream>
#include <string>
#include "Questionnaire.h"
#include "Totalscore.h"
#include <vector>
using namespace std;

Questionnaire::Questionnaire(){
  string question;
  string answer;
  int score;

  int i = 0;
  cout << "Type a question to ask or type 'exit' to quit." << endl;
  getline (cin,question);
  while(question != "exit"){
    questions[i].push_back(question);
    cout << "Type in answers for the questions, then the score given " 
         << "or type 'done' to create a new question" << endl;
    getline (cin, answer);

    while(answer != "done"){
      answers[i].push_back(answer);
      cin >> score;
      scores[i].push_back(score);
      
      getline (cin, answer);
    }
    cout << "Type a question to ask or type 'exit' to quit." << endl;
    getline (cin,question);
    ++i;
  }
}

int Questionnaire::askQuestions(){
  int total = 0;
  int answer = 0;
  for(int i = 0; i < questions.size(); ++i){
    cout << questions[i] << endl;
    for(int j = 0; j < answers.size(); ++j){
      cout << j+1 << ". " << answers[i][j] << endl;
    }
    cin >> answer;
    if(answer >= 0 && answer < answers[i].size()){
      total = total + scores[i][answer];
    }
    
  }
}

void Questionnaire::createQuestions(){
  string question;
  string answer;
  int score;

  int i = questions.size();
  cout << "Type a question to ask or type 'exit' to quit." << endl;
  getline (cin,question);
  while(question != "exit"){
    questions[i].push_back(question);
    cout << "Type in answers for the questions, then the score given " 
         << "or type 'done' to create a new question" << endl;
    getline (cin,answer);

    while(answer != "done"){
      answers[i].push_back(answer);
      cin >> score;
      scores[i].push_back(score);
      
      getline (cin, answer);
    }
    cout << "Type a question to ask or type 'exit' to quit." << endl;
    getline (cin, question);
    ++i;
  }
}
