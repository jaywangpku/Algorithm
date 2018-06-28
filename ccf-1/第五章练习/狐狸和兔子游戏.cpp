#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[11] = {0};
	int k = 1;
	a[k] = 1;
	a[10] = 1;
	for(int i = 2; i <= 1000; i++){
		k = (k+i)%10;
		a[k] = 1;
	}
	for(int i = 1; i <= 10; i++){
		if(!a[i]){
			cout << i << " ";
		}
	}
	return 0;
} 
