#include <iostream>
using namespace std;

int main()
{
	int n,i,j;
	cin >> n >> i >> j;
	for(int a = 1; a <= n; a++){
		cout << "(" << i << "," << a << ")" << " ";
	}
	cout << endl;
	for(int a = 1; a <= n; a++){
		cout << "(" << a << "," << j << ")" << " ";
	}
	cout << endl;
	int a = i, b = j;
	while(a>1&&b>1){
		a--;
		b--;
	}
	while(a<=n&&b<=n){
		cout << "(" << a << "," << b << ")" << " ";
		a++;
		b++;
	}
	cout << endl;
	a = i; b = j;
	while(a<n&&b>1){
		a++;
		b--;
	}
	while(a>=1&&b<=n){
		cout << "(" << a << "," << b << ")" << " ";
		a--;
		b++;
	}
	cout << endl;
    return 0;
}
