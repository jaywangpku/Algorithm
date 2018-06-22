#include <bits/stdc++.h>
using namespace std;

int ans[1000001];
int pell(int k)
{
	ans[1] = 1;
	ans[2] = 2;
	for(int i = 3; i <= k; i++){
		ans[i] = ans[i-1]*2+ans[i-2];
		ans[i] = ans[i]%32767;
	}
	return ans[k];
}

int main()
{
	int N;
	cin >> N;
	while(N--){
		int k;
		cin >> k;
		cout << pell(k) << endl;
	}
	return 0;
} 
