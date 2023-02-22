#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<string> tasks = {"Study math",
                          "Study science",
                          "Study physics",
                          "Study chemistry",
                          "Study biology",
                          "Study history",
                          "Study literature",
                          "Study language",
                          "Study art",
                          "Study music",
                          "Study philosophy",
                          "Study psychology",
                          "Study sociology",
                          "Study economics",
                          "Study politics",
                          "Study geography",
                          "Study computer science",
                          "Study engineering",
                          "Study medicine",
                          "Study law"};

  cout << "*You picked up an alien gun" << endl;
  cout << "*Spits translator microbes " << endl;
  cout << "Finally, I'm free thank God! What a nightmare!" << endl;
  cout << "Hi, I am Kenny." << endl;
  cout << "Kenny:Sorry about the spit, I- I needed you to get infected with "
          "the translator microbes"
       << endl;
  cout << "Kenny:T-That's sorta how it works" << endl;

  cout << "Kenny:Welcome!!!" << endl;

  cout << "Kenny:Here are the subjects to study!" << endl;
  for (const string &task : tasks) {
    cout << "- " << task << endl;
  }

  cout << "Kenny: Enter 'Random' to get a random task, or 'Exit' to quit."
       << endl;

  string input;
  while (true) {
    cin >> input;

    if (input == "Random") {

      random_device rd;
      mt19937 gen(rd());
      uniform_int_distribution<int> dis(0, tasks.size() - 1);
      int index = dis(gen);

      cout << "Kenny:Your task today is: " << tasks[index] << endl;
      cout << "Lezduit: LEEEEZZZDDUUITT!!!!" << endl;
    }

    else if (input == "Exit") {
      break;
    }

    else {
      cout << "Kenny: Invalid input. Please enter 'Random' or 'Exit'." << endl;
    }
  }

  return 0;
}
