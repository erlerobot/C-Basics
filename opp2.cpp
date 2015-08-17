/*
Write a program with a mother class and an inherited daugther class.
Both of them should have a method void display ()that prints a message (different for mother and daugther).
In the main define a daughter and call the display() method on it.
*/
#include <iostream>
using namespace std;

class Mother{
public:
	Mother(){};
	void display(){cout << "hello im the mother!"<< endl;};	
};

class Daughter : public Mother{
public:
	Daughter(){};
	void display(){cout << "hello im the daugther!"<< endl;};	
};

int main()
{	
	Mother mo;
	Daughter dau;
	mo.display();
	dau.display();

	return 0;
}