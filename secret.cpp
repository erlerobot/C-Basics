//EXAMPLE2 SECRET NUMBER
//In this example a random number is created. The program will run until the user guesses that number.
 #include <iostream>
 #include <time.h>
 #include <cstdlib>
 using namespace std;
 int main(){
  int g, x = 1, max = 100, min = 0, e, array[]= {0};
  g = rand()%(max-min+1)+min;
  // This will run until the number is guessed
  while(true){
    cout << "Guess a number between 0 and 100" << endl;
    // The following line accepts input from the keyboard into e.
    // In the other hand it's important to check that it's a number.
    if (!(cin >> e)) {
      cout << "Please enter only numbers" << endl;
    } else {
      array[x-1] = e;
      if (e > g){
          cout << "The number is lower than "<< e <<" ,try again!" << endl;}
     else if (e < g){
          cout << "The number is higher than "<< e << " ,try again!" << endl;}
      else {
          cout << "Congrats!" << endl;
          cout << "You needed "<< x <<" trials"<< endl;
          cout << "These are all the numbers you have entered: "<< endl;
          for (int i = 0; i < sizeof(array); ++i){
               cout << array[i] << "\t";}
          cout << endl;
          break; //This line stops the loop.
         }
      x=x+1;
      }
    }
 return 0;
}