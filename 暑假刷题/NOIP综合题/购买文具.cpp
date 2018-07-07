#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, n;
	double ans;
	cin >> a >> n;
	if(a==1){
		if(n<=2){
			ans = n*10;
		}
		else if(n>2&&n<=10){
			ans = 2*10+(n-2)*9;
		}
		else{
			ans = 2*10+8*9+(n-10)*7.5;
		}
	}
	else if(a==2){
		if(n<=10){
			ans = 9*n;
		}
		else if(n>10&&n<=50){
			ans = 9*0.8*n;
		}
		else{
			ans = 9*0.6*n;
		}
	}
	else{
		if(n>=10&&n<50){
			ans = 6*n;
		}
		else if(n>=50&&n<100){
			ans = 5*n;
		} 
		else{
			ans = 4*n;
		}
	}
	printf("%.2f\n", ans);
	return 0;
} 
