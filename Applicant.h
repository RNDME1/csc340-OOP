#include <string>
#include <vector>
#ifndef Applicant.h
#define Applicant.h

using namespace std;

class applicant{
    private:
        string firstName;
        string lastName;
        int age;
        int b_year;
        int b_month;
        int b_day;

        string email;
        string education;
        int phoneNum;

        vector<string> prevExp;  //Previous experience the applicant has
        vector<string> jobsApplied;
        int totalScore;

    public: 
        Applicant(string first, string last, int u_age,
                    int year, int month, int day, 
                    string em, string edu,int phone);

        void setName(string first, string last);
        void setAge(int age);
        void setBirthday(int year, int month, int day);
        void setInfo(string em, string edu, int phone);
        
        string getName(){return (lastName + " " + firstName);}
        int getAge(){return age;}
        string getBirthday(){}  //TO DO finish this
        string getEmail(){return email;}
        string getEducation(){return education;}
        int getPhoneNumber(){return phoneNum;}
};