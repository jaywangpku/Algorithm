#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n>=1000){
		cout << 4 << endl;
		cout << n/1000 << " ";
		cout << n%1000/100 << " ";
		cout << n%100/10 << " ";
		cout << n%10 << endl;
	}
	else if(n>=100&&n<1000){
		cout << 3 << endl;
		cout << n/100 << " ";
		cout << n%100/10 << " ";
		cout << n%10 << endl;
	}
	else if(10<=n&&n<100){
		cout << 2 << endl;
		cout << n/10 << " ";
		cout << n%10 << endl;
	}
	else{
		cout << 1 << endl;
		cout << n << endl;
	}
	return 0;
} 
