#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[105] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			int temp = 0, flag = 0;       // temp表示该段喜爱值总和 ，flag表示下一颗糖的加成值 
			for(int k = i; k <= j; k++){
				if(a[k]==0){
					temp += 5 + flag;
					flag = 0;
				}
				else if(a[k]==1){
					continue;
				}
				else if(a[k]==2){
					temp += 10 + flag;
					flag = 1;
				}
				else if(a[k]==3){
					temp += 7 + flag;
					flag = 0;
				}
				else{
					temp += 1 + flag;
					flag = -2;
				}
			}
			if(ans < temp){
				ans = temp;
			}
		}
	}
	cout << ans;
	return 0; 
} 
