// Exercises: Classes
// Exercise 1
#include <iostream>
#include <string>

using namespace std;

class Student {

   public:
   string name;
   float mark1, mark2;
   Student (string na, float ma1, float ma2){name=na; mark1=ma1; mark2=ma2;};
   float calc_media (float mark1, float mark2){return (mark1+mark2)/2;};
   void display (){cout << name << ", your media is: " << calc_media(mark1,mark2) << endl;};
};



int main () {

  string na;
  float mark1, mark2;
  cout<<"Enter your name"<< endl;
  cin>>na;
  cout<<"Enter mark 1"<<endl;
  cin>>mark1;
  cout<<"Enter mark 2"<<endl;
  cin>>mark2;
  Student stu1(na,mark1,mark2);
  stu1.display();
  return 0;
} 

