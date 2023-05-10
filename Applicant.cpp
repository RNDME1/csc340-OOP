#include <iostream>
using namespace std;

#include "Applicant.h"
#include <string>



void Applicant::setAll(string first, string last, int ageYears,int year, int month, int day, string em, string edu, int phone){
    setName(first, last);
    setAge(ageYears);
    setBirthday(year, month, day);
    setInfo(em, edu, phone);
}

//functions to set values
void Applicant::setName(string first, string last){
    firstName = first;
    lastName = last;
}

void Applicant::setAge(int ageYears){
    age = ageYears;
}
void Applicant::setBirthday(int year, int month, int day){
    b_year = year;
    b_month = month;
    b_day = day;
}

void Applicant::setInfo(string em, string edu, int phone){
    email = em;
    education = edu;
    phoneNum = phone;
}

void Applicant::addPrevExp(){
    string job;
    string years;
    cout << "Enter job title or type 'exit' to quit the program" << endl;
    cin >> job;
    while(job != "exit"){
        cin >> years;
        prevExp.push_back(job + " : " + years + " years");
        cin >> job;
        cout << "Enter job title or type 'exit' to quit the program" << endl;
    }
}

void Applicant::addJobApplied(string job){
    jobsApplied.push_back(job)
}

string Applicant::getAllInfo(){
    return (getName() + " " + to_string(getAge())  + " " + getBirthday()  + 
    " " + getEmail() + " " + getEducation() + " " + to_string(getPhoneNumber()));
}

string Applicant::getName(){
    return (lastName + " " + firstName);
}

int Applicant::getAge(){
    return age;
}

string Applicant::getBirthday(){
    return to_string(b_year) + " " + to_string(b_month) + " " + to_string(b_day);
}

string Applicant::getEmail(){
    return email;
}

string Applicant::getEducation(){
    return education;
}

int Applicant::getPhoneNumber(){
    return phoneNum;
}

int Applicant::getTotalScore(){
    return totalScore;
}