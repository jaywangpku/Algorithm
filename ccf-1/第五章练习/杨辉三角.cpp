#include <bits/stdc++.h>  
using namespace std;  
  
int main()  
{  
    int n, a[100][100];
    cin >> n;
    memset(a, 0, sizeof(a));
    a[1][1] = 1;
    
    for(int i = 2; i <= n; i++){            // 控制行 
    	for(int j = 1; j <= i; j++){        // 在每一行去操作每个元素 
    		a[i][j] = a[i-1][j-1] + a[i-1][j]; 
    	}
    }
    
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= i; j++){
    		cout << a[i][j] << " ";
    	}
    	cout << endl;
    }
    return 0;  
}  







