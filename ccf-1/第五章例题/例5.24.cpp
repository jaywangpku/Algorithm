#include <iostream>
#include <cstring>
#include <cmath>
const int MAXN = 85;
using namespace std;

int main()
{
	int a[MAXN][8];
	float av[7];
	memset(av, 0, sizeof(av));
	memset(a, 0, sizeof(a));
	int temp, k, n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i][0];
		for(int j = 1; j <= 6; j++){
			cin >> a[i][j];
			a[i][7] += a[i][j];
			av[j] += a[i][j];
		}
	}
	for(int i = 1; i <= 6; i++){
		av[i] /= n;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= 7; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 1; i <= 6; i++){
		cout << round(av[i]*10)/10 << " ";
	}
	return 0;
}
