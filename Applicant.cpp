#include "Applicant.h"
#include <string>
#include <iostream>
using namespace std;

//Applicant constructor
Applicant::Applicant(string first, string last, int u_age,
                    int year, int month, int day, 
                    string em, string edu, int phone){

    setName(first, last);
    setAge(u_age);
    setBirthday(b_year, b_month, b_day);
    setInfo(em, edu, phone);
}

//functions to set values
void Applicant::setName(string first, string last){
    firstName = first;
    lastName = last;
}

void Applicant::setAge(int u_age){
    age = u_age;
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