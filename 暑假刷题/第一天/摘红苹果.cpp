#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}
int main()
{
	int n, m;
	int a[105] = {0};
	int b[25] = {0};
	int ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a+n, cmp);
	sort(b, b+m, cmp);
	int i = 0, j = 0, k = 0;
	while(i<n&&j<m){
		if(b[j] >= a[i]){
			ans++;
			if(k==1){
				j++;
				k = 0;
			}
			else{
				k++;
			}
			i++;
		}
		else{
			i++;
		}
	}
	cout << ans << endl;
	return 0;
} 
