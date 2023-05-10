#ifndef APPLICANT_H
#define APPLICANT_H

#include <string>
#include <vector>

using namespace std;

class Applicant{
    public: 
        Applicant(string first, string last, int ageYears, int year, int month, int day, string em, string edu, int phone);

        void setName(string first, string last);
        void setAge(int ageYears);
        void setBirthday(int year, int month, int day);
        void setInfo(string em, string edu, int phone);
        void addPrevExp();
        void addJobApplied(string job);
        void addScore(int score);
        
        string getAllInfo();

        string getName();
        int getAge();
        string getBirthday();
        string getEmail();
        string getEducation();
        int getPhoneNumber();
        int getTotalScore();

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

        vector<string> prevExp;     //Previous experience the applicant has
        vector<string> jobsApplied;
        int totalScore = 0;
};
#endif