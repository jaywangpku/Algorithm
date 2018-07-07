#include <bits/stdc++.h>
using namespace std;

long long a[2000000], b[100000];
int main()
{
	long long L, R;
	cin >> L >> R;
	for(int i = 0; i < 100000; i++){
		b[i] = 1;
	}
	for(int i = 2; i < 100000; i++){
		if(b[i]){
			for(int j = 2; i*j < 100000; j++){
				b[i*j] = 0;
			}
		}
	}
//	for(int i = 2; i < 100000; i++){
//		if(b[i]){
//			cout << i << " ";
//		}
//	}
	
	for(int i = 0; i < 2000000; i++){
		a[i] = 1;
	}
	for(int i = 2; i < ceil(sqrt(R)); i++){     // 此处需要注意考虑上界 
		if(b[i]==1){
			for(long long j = L; j <= R; j++){
				if(j>i&&j%i==0){
					while(j<=R){
						a[j-L] = 0;
						j = j + i;
					}
					break;
				}
			}
		}
	}
	int ans = 0;
	for(long long i = L; i <= R; i++){
		if(a[i-L]==1){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
} 
