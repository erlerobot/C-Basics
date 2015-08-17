#include <iostream>
#include "firstclass.h"

using namespace std;

int main()
{
	triangle tri;
	tri.h = 2; tri.l = 3;
	int area = tri.area();
	cout << "This is the area: " << area << endl;
	return 0;
}