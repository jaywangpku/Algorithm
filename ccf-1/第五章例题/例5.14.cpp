#include <iostream>
using namespace std;
const int MAXN = 100001;

int main()
{
	/*
	int n,k,i,j;
	float temp, a[MAXN];
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	for(i = 0; i < n; i++){
		k = i;
		for(j = i+1; j < n; j++){
			if(a[k]>a[j]){
				k = j;
			}
		}
		if(k!=i){
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
	for(i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
	*/
	/*
	float temp, a[MAXN];
	int n, i, j;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	for(i = n-1; i >= 1; i--){
		for(j = 0; j < i; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i = 0; i < n-1; i++){
		cout << a[i] << " ";
	}
	return 0;
	*/
	float a[MAXN], temp;
	int n,i,j,k;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	for(i = 0; i < n; i++){
		for(j = i-1; j >= 0; j--){
			if(a[j] < a[i])
				break;
		}
		if(j!=i-1){
			temp = a[i];
			for(k = i-1; k > j; k--){
				a[k+1] = a[k];
			}
			a[k+1] = temp;
		}
	}
	for(i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	return 0;
} 
