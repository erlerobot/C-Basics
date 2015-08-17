#include <iostream>
#include <string>
using namespace std;

int main()
{   
	string x;
	string ok = "ok";
	string ko = "ko";
	
	cout << "Hey! how are you?" << endl;
	cin >> x;
    if (x == ok)
    {
    	cout << "Thats gooood" << endl;
    }
    else if (x == ko)
    {
    	cout << "Oh nooo!" << endl;
    }
	return 0;
}