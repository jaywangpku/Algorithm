#include <iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if(a>=90){
		cout << "excellent";
	}
	else if(a>=80&&a<90){
		cout << "good";
	}
	else if(a>=60&&a<80){
		cout <<"pass";
	}
	else{
		cout << "poor";
	}
	return 0;
} 
