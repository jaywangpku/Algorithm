#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	double ans = 0;
	if(a<=1500){
		ans = a*0.03;
	}
	else if(a>1500&&a<=4500){
		ans = a*0.1-105;
	}
	else if(a>4500&&a<=9000){
		ans = a*0.2-555;
	}
	else if(a>9000&&a<=35000){
		ans = a*0.25-1005;
	}
	else if(a>35000&&a<=55000){
		ans = a*0.3-2755;
	}
	else if(a>55000&&a<=80000){
		ans = a*0.35-5505;
	}
	else{
		ans = 80000*0.35-5505+(a-80000)*0.45;
	}
	cout << ans << endl;
	return 0;
} 
