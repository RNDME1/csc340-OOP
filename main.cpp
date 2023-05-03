/*******************************
*           Main Program
*       
*       Authors: Ethan, David Zhou
*       
*
*
*******************************/

#include <iostream> 
#include <vector>
#include <string>

using namespace std;

// Applicant structure
// This is filled out by the applicant
struct Applicant{
   string firstName;
   string lastName;
   int age;
   string email;
   int birthday;
   string education;
   int phoneNum;
   vector<string> prevExp;  //Previous experience the applicant has
   vector<string> jobsApplied;
   int totalScore;
   
   Applicant* next;
   Applicant* prev;
};

// Job structure
// This is the job listing it tells the applicant
// what the job is and what is the min requirements
struct Job{
    string jobTitle;
    string position;
    int scoreReq;
    string minEducation;
    Questions questionnaire;
    
    Job* next;
    Job* prev;
};

// Question structure
// This is created by the job lister to ask the
// applicant simple questions
struct Questions{
    string question;
    vector<string> answers;
    vector<int> scores;

    Questions* next;
    Questions* prev;
};

// creates a new applicant
// input: Applicant* linked list
// adds the new applicant alphabetically by last name
// returns the newly created applicant 
Applicant* createApplicant(Applicant* list);

// creates a new job listing
// input: Job* nodes in a linked list;
// adds the job listing to the end of the linked list
// returns the newly created job listing
Job* createJob(Job* list);

// creates a new question 
// input: Questions* linked list
// adds the new question to the end of the questionaire list
// returns the newly created question
Questions* createQuestions(Questions* list);

int main(){
    Applicant* resumes = nullptr;
    
} //end main

