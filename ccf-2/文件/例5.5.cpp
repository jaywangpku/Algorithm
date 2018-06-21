#include <iostream>
#include <cstdio>
using namespace std;

int N, a[1000001];
int main()
{
	freopen("reverse.in", "r", stdin);
	freopen("reverse.out", "w", stdout);
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}
	for(int i = N - 1; i >= 0; i--){
		printf("%d\t", a[i]);
	}
	return 0;
}

