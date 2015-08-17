/*#include <iostream>
#include <array>

using namespace std;

int main()
{	
	int a, b, c, value;
	cout << "give me three integers please: "<< endl;
	cin >>  a;
	cin >>  b;
	cin >>  c;
	int array[] = {a, b, c};

	int max = 0;

	for (int i = 0; i < sizeof(array); ++i)
	{
		if (array[i] >= max){
			max = i;
		}
	}

	int *ptr = array;
	ptr+=max;

	cout << "The location of max number is: " << ptr << " and its value is: " << *ptr<< "and.." <<endl;

	return 0;
} */


// Exercises: Pointers
// Exercise 3
#include <iostream>
using namespace std;

int main(){

    const char *ptr = "Astring";
    cout<< " The pointer values is "<< *ptr << " the memory address is: "<<  (void *)ptr << endl;
    ptr+=2;
    cout<< " The pointer values is "<< *ptr << " the memory address is: "<<  (void *)ptr << endl;
    ptr+=1;
    cout<< " The pointer values is "<< *ptr << " the memory address is: "<<  (void *)ptr << endl;

    return 0;
} 

/*// Exercises: Pointers
// Exercise 4

#include <iostream>
using namespace std;

int main(void) {
   char str[] = "A string.";
   char *pc = str;

   cout << str[0] <<' '<< *pc <<' '<<pc[3]<<"\n";
   pc += 2;
   cout <<*pc<<' '<< pc[2] <<' '<< pc[5];

   return 0;
}*/

