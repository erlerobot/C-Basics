#include <iostream>

using namespace std;



int main()
{
	long arr [] = {6,0,9,6};
	long * ptr = arr ;
	cout << "the memory address is: " << ptr << " and its value: " << *ptr << endl ;
	ptr ++;																				// now its pointing to de next element
	cout << "And now..." << endl;
	cout << "the memory address is: " << ptr << " and its value: " << *ptr << endl ;
	long *ptr2 = arr + 3;
	cout << "the memory address is: " << ptr2 << " and its value: " << *ptr2 << endl ;
	cout << "the memory address is: " << ptr2 << " and its value: " << *ptr2 << endl ;

	return 0;
}