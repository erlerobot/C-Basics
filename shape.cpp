//EXAMPLE 6: SHAPE CLASS AND TRIANGLE - RECTANGLE SUBCLASSES
//Base class Shape

#include <iostream>
using namespace std;

class Shape{
 protected:
    //Fields
     int width, height;
 public:
     //Constructor
     Shape(int myWidth, int myHeight) : width ( myWidth ), height ( myHeight ) {};
    //Methods
     void set_params(int wi, int hei){width=wi; height= hei;};
     void print_info(){cout << "The width is: " << width << " The height is: " << height << endl;};
     virtual int area (){return 0;};  
  };
 //First subclass Triangle
 class Triangle : public Shape{ 
 public:
 	  Triangle (int myWidth, int myHeight) : Shape( myWidth, myHeight) {};
 	  int area(){return width*height/2;};
  };
 //Second subclass Rectangle
 class Rectangle : public Shape{
 public:
 	  Rectangle (int myWidth, int myHeight) : Shape( myWidth, myHeight) {};
       int area(){return width*height;};
 };

int main()
{	
	int width = 2;
	int height = 2;
	Triangle tri(width,height);
	Rectangle rec(width,height);
	cout << "The area of the triangle is: " << tri.area() << endl;
	cout << "The area of the rectangle is: " << rec.area() << endl;
	tri.print_info();
	rec.print_info();
	return 0;
}