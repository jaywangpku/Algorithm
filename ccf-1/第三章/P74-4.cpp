#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if(a%123>=97&&a%123<=122){
		cout << (char)(a%123);
	}
	else if(a%91>=65&&a%91<=90){
		cout << (char)(a%91);
	}
	else{
		cout << "*";
	}
	return 0;
} 
