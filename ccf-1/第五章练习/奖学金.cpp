#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[400][5] = {0};
	for(int i = 0; i < n; i++){
		a[i][0] = i+1;
		cin >> a[i][1] >> a[i][2] >> a[i][3];
		a[i][4] = a[i][1]+a[i][2]+a[i][3];
	}
	for(int i = n-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(a[j][4] < a[j+1][4]){
				for(int m = 0; m < 5; m++){
					swap(a[j][m], a[j+1][m]);
				}
			}
			else if(a[j][4] == a[j+1][4]){
				if(a[j][1] < a[j+1][1]){
					for(int m = 0; m < 5; m++){
						swap(a[j][m], a[j+1][m]);
					}
				}
				else if(a[j][1] == a[j+1][1]){
					if(a[j][0] > a[j+1][0]){
						for(int m = 0; m < 5; m++){
							swap(a[j][m], a[j+1][m]);
						}
					}
				}
			}
		}
	}
	for(int i = 0; i < 5; i++){
		cout << a[i][0] << " " << a[i][4] << endl;
	}
	return 0;
} 
