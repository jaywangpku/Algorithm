#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[10001], b[10001];
	memset(b, 0, sizeof(int)*10001);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		b[arr[i]]++;
	}
	int index = 1;
	for(int i = 0; i < 10001; i++){
		if(b[i]!=0){
			b[i] = index;
			index++;
		}
	}
	for(int i = 0; i < n; i++){
		cout << b[arr[i]] << " ";
	}
	return 0;
}
