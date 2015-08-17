/*
Write a probram with a mother class animal. Inside it define a name and an age variables, and set_value() function.
Then create two bases variables Zebra and Dolphin which write a message telling the age, 
the name and giving some extra information (e.g. place of origin).
*/
#include <iostream>
using namespace std;

class Animal{

public:
	const char* name;
	int age;
	Animal(const char* myname) : name (myname){};
	void set_value(int age_value){age = age_value;};	
};

class Zebra : public Animal{
public:
	const char* origin;
	Zebra (const char* myname, const char* myorigin) : Animal (myname), origin (myorigin){};
	void display_info(){cout << "Im: "<< name << " , my age is: " << age << " and im from: "<< origin<< endl;};

};

class Dolphin : public Animal{
public:
	const char* origin;
	Dolphin (const char* myname, const char* myorigin) : Animal (myname), origin (myorigin){};
	void display_info(){cout << "Im: "<< name << " , my age is: " << age << " and im from: "<< origin<< endl;};

};

int main()
{	
	const char* name = "anita";
	const char* origin = "pamplona";
	Zebra zeb(name, origin);
	zeb.set_value(23);
	zeb.display_info();
	return 0;
}

