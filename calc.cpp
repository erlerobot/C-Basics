#include <iostream>
using namespace std;

//calculate 6^5

int raisepow(int a , int b){
	int result;
	result = 1;

	for (int i = 1; i <= b; ++i){

		result = result * a ;
	}
	return result;
}

int main() {

	int res = raisepow(2,4);

	cout << "this is it: " << res << endl;
	return 0;
    
}

