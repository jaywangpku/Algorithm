#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	while(m--){
		int k;
		cin >> k;
		int low = 0; 
		int high = n-1; 
		int mid = (low+high)/2;
		int ans = -1;
		while(low <= high){
			mid = (low+high)/2;
			if(a[mid] == k){
				ans = k;
				break;
			}
			else if(a[mid] < k){
				low = mid + 1;
			}
			else if(a[mid] > k){
				high = mid - 1;
			}
		}
		if(ans > -1){
			cout << ans << endl;
		}
		else{
			int l, r, cha, t;   // mid左边一个或者右边一个或者就是mid这个 
			l = mid>0?mid-1:mid;
			r = mid<n-1?mid+1:mid;
			cha = abs(k-a[l]);
			t = l;
			for(int i = l+1; i <= r; i++){
				if(cha > abs(k-a[i])){
					t = i;
					cha = abs(k-a[i]);
				}
			}
			cout << a[t] << endl;
		}
	}
	return 0;
}
