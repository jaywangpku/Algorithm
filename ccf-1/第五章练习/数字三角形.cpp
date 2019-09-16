#include <bits/stdc++.h>  
using namespace std;  
  
int main()  
{  
    int n;
    int a[100][100];
    cin >> n;
    for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i+1; j++){
			a[i][j] = j;
		} 
	} 
    for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n-i+1; j++){
			cout << a[i][j] << " ";
		} 
		cout << endl;
	} 
    return 0;  
}  







