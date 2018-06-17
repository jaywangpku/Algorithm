#include <iostream>
using namespace std;

int main()
{
	int a;
	float ans = 0;
	cin >> a;
	if(a > 30 || a <= 0){
		ans = -1;
	}
	else if(a<=10){
		ans = a*0.8+0.2;
	}
	else if(a<=20&&a>10){
		ans = 10*0.8+(a-10)*0.75+0.2;
	}
	else if(a<=30&&a>20){
		ans = 10*0.8+10*0.75+(a-20)*0.7+0.2;
	}
	cout << ans << endl;
	return 0;
} 
