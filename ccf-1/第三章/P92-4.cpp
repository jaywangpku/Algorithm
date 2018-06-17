#include <iostream>
using namespace std;

int main()
{
	cout << "[1] apples" << endl;
	cout << "[2] pears" << endl;
	cout << "[3] oranges" << endl;
	cout << "[4] grapes" << endl;
	cout << "[0] Exit" << endl;
	int n = 1;
	cin >> n;
	switch(n){
		case 0:
			break;
		case 1:
			cout << "price=3.0" << endl;
			break;
		case 2:
			cout << "price=2.5" << endl;
			break;
		case 3:
			cout << "price=4.1" << endl;
			break;
		case 4:
			cout << "price=10.2" << endl;
			break;
		default:
			cout << "price=0" << endl;
			break;
	}
	return 0;
} 
