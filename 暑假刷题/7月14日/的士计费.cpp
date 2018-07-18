#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a;
	cin >> a;
	double ans = 0;
	if(a<=1&&a>0){
		ans = 3;
	}
	else if(a>1&&a<=3){
		if(a>1&&a<=1.5){
			ans = 4;
		}
		else if(a>1.5&&a<=2){
			ans = 5;
		}
		else if(a>2&&a<=2.5){
			ans = 6;
		}
		else{
			ans = 7;
		}
	}
	else if(a>3){
		ans = 7 + ceil((a-3)/0.5)*0.9;
	}
	if(a>10){
		ans = 19.6 + (ans - 19.6) * 1.5;
	}
	cout << ans << endl;
	return 0;
} 
