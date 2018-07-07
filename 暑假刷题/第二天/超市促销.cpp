#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if(a>50&&a<100){
		a = (a-50)*0.9+50;
	}
	else if(a>=100){
		a = (a-100)*0.8+95;
	}
	cout << a << endl;
	return 0;
} 
