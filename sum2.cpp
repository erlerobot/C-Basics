//add multiply numbers
#include <iostream>
#include <time.h>
#include <string>
#include <cmath>

using namespace std;

 int main()
{	
	string r, operations, add, mul, dev, qui;
	float i, k;
	operations = "", add = "a"; mul = "m"; dev = "d"; qui = "q";
	while(true){
	cout << "Enter an operation: a = add, m = multiply, d = devide, q = quit" << endl;
    if (cin >> r){	

    		if (r == qui){
				cout << "Exiting... " << endl;
				break;
			}		

			cout << "Enter first number" << endl;
			
			while(!(cin >> i)) {
				cout << "You have to enter a number" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Enter first number" << endl;
				} 

			cout << "Enter second number" << endl;

			while(!(cin >> k)) {
				cout << "You have to enter a number" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Enter second number" << endl;
				} 
			

			if (r == add){
				cout << "This is the result of the sum: " << i+k << endl;
				}

			else if (r == mul){
				cout << "This is the result of the multiplication: " << i*k << endl;
				}

			else if (r == dev){
				cout << "This is the result of the division: " << i/k << endl;
				cout << "It's module is: " << fmodf(i,k) << endl;
			}		
					
		  }
			 	 
	else {
		cout << "thats not an operation" << endl;
	}
   } 

	return 0;
}