#include <iostream>
#include <time.h>
#include <string>
#include <cmath>

using namespace std;

class Point {
public:
 double x, y;
 void offset(double offsetX, double offsetY);
 void print();
};


class Vector {
public:
 Point start;
 Point end;
 void offset(double offsetX, double offsetY) {
 start.x += offsetX;
 end.x += offsetX;
 start.y += offsetY;
 end.y += offsetY;
 }

 void print() {
 cout << "(" << start.x << "," << start.y << ") -> (" << end.x <<
"," << end.y << ")" << endl;
 }
};

Vector vec;
vec.start.x = 1.2; vec.end.x = 2.0;
vec.start.y = 0.4; vec.end.y = 1.6;
vec.print();
vec.offset(1.0, 1.5);

int main(int argc, char const *argv[])
{
	print();
	return 0;
}