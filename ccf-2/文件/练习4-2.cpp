#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
	int a[1001] = {0};
	int temp, i = 0;
	int maxa, mina;
	double avg;
	while(cin >> temp){
		a[i] = temp;
		i++;
	}
	maxa = a[0];
	mina = a[0];
	avg = 0;
	for(int j = 1; j < i; j++){
		if(maxa < a[j]){
			maxa = a[j];
		}
		if(mina > a[j]){
			mina = a[j];
		}
		avg = avg + a[j];
	}
	cout << maxa << endl;
	cout << mina << endl;
	printf("%.3f\n", avg/i);
	return 0;
} 
