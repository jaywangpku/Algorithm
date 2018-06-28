#include <bits/stdc++.h>
using namespace std;

long long s[1000001] = {0};  //小矩形在直线x=i左边的面积
int main()
{
	long long m[501][4], N, R, total=0;
	cin >> R >> N;
	for(int i = 0; i < N; i++){
		cin >> m[i][0] >> m[i][1] >> m[i][2] >> m[i][3];
	}
	for(int i = 0; i < N; i++){
		total += m[i][2] * m[i][3];
	}
	for(int x = 1; x <= R; x++){
		for(int j = 0; j < N; j++){
			if(x<m[j][0]){
				continue;
			}
			s[x] += min(x-m[j][0], m[j][2]) * m[j][3];
		}
	}
	for(int i = 0; i <= R; i++){
		if(s[i]<(total-s[i])){
			continue;
		}
		long long cha = s[i] - (total - s[i]);
		int j;
		for(j = i+1; j <= R; j++){
			if((s[j] - (total-s[j]))<=cha){
				i = j;
				cha = s[j] - (total - s[j]);
			}
		}
		cout << i;
		break;
	}
	return 0;
} 
