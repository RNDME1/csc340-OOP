/* * * * * * * * * * * * * * * * * * * *
*
*           Main Program
*       
*  Authors: Ethan Lam, David Zhou, 
*           Dexter Valera, Calvin Zheng
*  
* 
*
* * * * * * * * * * * * * * * * * * * */

#include <iostream> 
#include <vector>
#include <string>

#include "Applicant.h"

using namespace std;

// Resume structure
// This is filled out by the applicant
struct Resume{
   Applicant data;
   
   Resume* next;
   Resume* prev;
};

// Job structure
// This is the job listing it tells the applicant
// what the job is and what is the min requirements
// struct Job{
//     string jobTitle;
//     string position;
//     int scoreReq;
//     string minEducation;
//     Questions questionnaire;
    
//     Job* next;
//     Job* prev;
// };

// Question structure
// This is created by the job lister to ask the
// applicant simple questions
// struct Questions{
//     string question;
//     vector<string> answers;
//     vector<int> scores;

//     Questions* next;
//     Questions* prev;
// };



int main(){
    
} //end main

