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

using namespace std;

// Resume structure
// This is filled out by the applicant
struct Resume{
   //Applicant data = Applicant("first", "last", 20, 2000, 1, 1, "test@gmail.com", "Highschool Diploma", 1111111);
                              //first,  last,  age, year,month,day,  email,           education,         phone
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

#include "Applicant.h"

int main(){
   //testing applicant
   Applicant test;
   // test.setAge(5);
   // cout << test.getAge() << endl;
   test.setAll("first", "last", 20, 2000, 1, 1, "test@gmail.com", "Highschool Diploma", 1111111);
   cout << test.getAllInfo() << endl;
} //end main

