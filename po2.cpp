#include <iostream>

using namespace std;

int main()
{	
	int a, b;
	cout << "give me two integers please: "<< endl;
	cin >>  a;
	cin >>  b;

	int *ptrA = &a;
	int *ptrB = &b;

	cout << "First number location is: " << ptrA << " and its value is: " << *ptrA << endl;
	cout << "Second number location is: " << ptrB << " and its value is: " << *ptrB << endl;

	return 0;
}