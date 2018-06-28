#include <iostream>
#include <fstream>
#include <cstring> 
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	m = m * 150 / 100;
	int a[5050][2];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++){
		cin >> a[i][0] >> a[i][1];
	}
	for(int i = n-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if((a[j][1] < a[j+1][1])||((a[j][1] == a[j+1][1])&&(a[j][0] > a[j+1][0]))){
				swap(a[j][0], a[j+1][0]);
				swap(a[j][1], a[j+1][1]);
			}
		}
	}
	int s = a[m-1][1];
	int t = 0;
	for(int i = 0; ; i++){
		if(a[i][1]>=s){
			t++;
		}
		else{
			break;
		} 
	}
	cout << s << " " << t << endl;
	for(int i = 0; i < t; i++){
		cout << a[i][0] << " " << a[i][1] << endl;
	}
	return 0;
} 




