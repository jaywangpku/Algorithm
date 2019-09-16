#include <bits/stdc++.h>  
using namespace std;  
  
int main()  
{  
    int n;
    cin >> n;
    int a[10][10];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n/2+1; i++){
    	for(int j = i; j < n-i; j++){
    		for(int k = i; k < n-i; k++){
    			a[j][k] = i+1;
    		}
    	}
    }
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		cout << a[i][j] << " "; 
    	}
    	cout << endl;
    }
    return 0;  
}  







