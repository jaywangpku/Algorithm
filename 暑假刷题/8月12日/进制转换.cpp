#include <bits/stdc++.h>
using namespace std;

void change(int n, int k){
	if(n==0){
		return ;
	}
	else{
		change(n/k, k);
		cout << n%k;
	}
}

int main()
{
	int n, k;
	cin >> n >> k;
	change(n, k);
	return 0;
} 
