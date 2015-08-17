 #include<iostream>
using namespace std;


 template <typename T>
 T sum(const T a, const T b) {
 return a + b;
 }

 template <typename T, typename U>   // different types
U sum(const T a, const U b) {
return a + b;
}

template <typename T>				// It also works with classes
 class Point {
 private:
 T x, y;
 public:
 Point(const T u, const T v) : x(u), y(v) {}
 T getX() { return x; }
 T getY() { return y; }
 };

 int main() {

 //cout << sum<int>(1, 2) << endl;
 //cout << sum<float>(1.21, 2.43) << endl;

 //OR

 cout << sum(1, 2) << endl;
 cout << sum(1.21, 2.43) << endl;

 cout << sum<int, float>(1, 2.5) << endl;

 return 0;
 }