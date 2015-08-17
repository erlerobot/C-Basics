#include <iostream>
#include <string>

using namespace std;

class Complex{
	
	public:
	float real, imag;
	Complex (float re, float i){real = re; imag = i;};
	void display(){cout << real << " + i"<< imag << endl ;};
};

Complex sum_complex(Complex com1, Complex com2){
	Complex com_sum(com1.real+com2.real,com1.imag + com2.imag);
	return com_sum;}

int main()
{
	float real1, real2, imag1, imag2; 
	cout << "First complex number (real) and (imaginari)"<< endl;
	cin >> real1; cin >> imag1;
	
	cout << "Second complex number (real) and (imaginari)"<< endl;
	cin >> real2; cin >> imag2;
	
	Complex com1(real1, imag1);
	Complex com2(real2, imag2);
	Complex sum = sum_complex(com1,com2);
	sum.display();
	return 0;
}