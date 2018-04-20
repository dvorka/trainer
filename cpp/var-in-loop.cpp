// g++ src.cpp

#include <iostream>

using namespace std;

int main(void)
{
	cout << "Initialized:" << endl;
	for(int i=0; i<3; i++) {
		int counter=0;
		counter++;
		cout << "  " << counter << endl;
	}	

	cout << "Non-initialized:" << endl;
	for(int i=0; i<3; i++) {
		int counter;
		counter++;
		cout << "  " << counter << endl;
	}	

	return 0;
}
