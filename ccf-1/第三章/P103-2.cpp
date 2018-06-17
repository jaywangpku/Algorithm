#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double x, y;
	cin >> x;
	if(0<=x&&x<5){
		y = x+2.5;
	}
	else if(x>=5&&x<10){
		y = 2-1.5*(x-3)*(x-3);
	}
	else if(10<=x&&x<20){
		y = x/2-1.5;
	}
	printf("%.3f", y);
	return 0;
} 
