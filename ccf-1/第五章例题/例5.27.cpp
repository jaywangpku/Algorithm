#include <iostream>
#include <cstring>
const int maxn = 1510;
using namespace std;

long long minnum[maxn][maxn];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			cin >> minnum[i][j];
		}
	}
	for(int i = n-2; i >= 0; i--){
		for(int j = 0; j <= i; j++){
			if(minnum[i+1][j] < minnum[i+1][j+1]){
				minnum[i][j] = minnum[i][j] + minnum[i+1][j];
			}
			else{
				minnum[i][j] = minnum[i][j] + minnum[i+1][j+1];
			}
		}
	}
	cout << minnum[0][0];
	return 0;
} 
