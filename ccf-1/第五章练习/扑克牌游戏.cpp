#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[60];
	memset(a, 0, sizeof(a));
	for(int i = 2; i <= 52; i++){
		for(int j = 1; i*j <= 52; j++){
			a[i*j] = !a[i*j];             // 满足条件的牌翻面 
		}
	}
	for(int i = 1; i <= 52; i++){
		if(a[i]){
			cout << i << " ";
		}
	}
	return 0;
} 


