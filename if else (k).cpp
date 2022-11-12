#include <iostream>

using namespace std;

int main()
{
	double n;
	int k;

	cout << "Enter the operator to perform: ";
	cin >> n;

	if (n < 10) {
		cout << "This number is lower than 10" << endl;
		k = 0;
	}
	else if (n == 10) {
		cout << "This number is 10" << endl;
			k = 10;
	}
	else {
		cout << "This number is more than 10" << endl;
		k = 1;
	}

cout << "k = " << k << endl;
return 0;

}
