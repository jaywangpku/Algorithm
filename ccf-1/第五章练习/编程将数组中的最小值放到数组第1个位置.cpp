#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100000];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++){   // 输入数据 
		cin >> a[i];
	}
	int mina = a[0];
	int t = 0;
	for(int i = 1; i < n; i++){   // 找到最小的数所在的位置 
		if(mina > a[i]){
			mina = a[i];
			t = i;
		}
	}
	int temp = a[t];   // 保存最小的数 
	while(t){          // 移动数组中数的位置 
		a[t] = a[t-1];
		t--;
	}
	a[0] = temp;       // 把最小的数放在最前面 
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
} 


