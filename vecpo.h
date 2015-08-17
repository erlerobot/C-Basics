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