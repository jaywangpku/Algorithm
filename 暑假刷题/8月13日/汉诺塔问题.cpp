#include <bits/stdc++.h>
using namespace std;

long long Tower(long long n){
	if(n==1){
		return 1;
	}
	else{
		return Tower(n-1)*2+1;
	}
}

int main()
{
	int n;
	cin >> n;
	cout << Tower(n);
	return 0; 
} 
