#include <iostream>
#include <string>

using namespace std;


class User {
public:
  int numProjects;
  int languageEXP;
  int yearsExperience;

  void askQuestions() {
    cout << "How many projects do you have? ";
    cout << "0" << endl;
    cout << "1." << endl;
    cout << "2." << endl;
    cout << "3." << endl;
    cout << "4." << endl;
    cout << "4+" << endl;
    cin >> numProjects;

    cout << "Do you have any experience using Java, C++ , or Python?" << endl;
    cout << "1. I have experience using Java "<< endl;
    cout << "2. I have experience using C++" << endl;
    cout << "3. I have experience using Python" << endl;
    cout << "4. I have experience using Java and C++" << endl;
    cout << "5. I have experience using Python and C++" << endl;
    cout << "6. I have experience using Java and Python" << endl;
    cout << "7. I have experience using C++ and Python" <<endl;
    cout << "8. I have experience using Java and Python and C++" << endl;

    cin >> languageEXP;

    cout << "How many years of experience do you have as a software engineer? ";
    cout << "1. Less than one year" << endl;
    cout << "2. One year" << endl;
    cout << "3. Two years" << endl;
    cout << "4. Three years" << endl;
    cout << "5. Over three years" << endl;
    cout << "6. No experience" << endl;
    
    cin >> yearsExperience;
  }
};
