#include "std_lib_facilities.h"

int main() {

  cout << "Enter the name of person you want to write to!\n";
  string name;
  cin >> name;
  cout << "Dear " << name << ",\n"
    << "\tHow are you? I am fine. I miss you."
    << "\n(Enter the name of a mutual friend!): ";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    char friend_sex = 0;
    cout << "(Enter the gender of this friend. m=male or f=female): ";
    cin >> friend_sex;
    cout << "If you see " << friend_name << " please ask ";

    if(friend_sex == 'm')
      cout << "him to call me.";
    else if(friend_sex == 'f')
      cout << "her to call me.";
    else cout << "it to call me.";

    cout << "\n(Enter the age of the recipient): ";
    int age;
    cin >> age;
    if((age < 1) || (age > 109))
      simple_error("you're kidding!");
    else {

      cout << "I hear you just had a birthday and you are " << age << " years old. ";

      if(age < 12) cout << "Next year you will be " << age+1 << ".";
      else if(age == 17) cout << "Next year you will be able to vote.";
      else if(age > 70) cout << "I hope you are enjoying retirement.";

    }

    cout << "\nYours sincerely,  Krisztián";

}
