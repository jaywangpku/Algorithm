/*
	老师写出一行n 个正整数，要求从中选取若干个，但不能选相邻的数，使选取数的和最大。
	如：从13、18、28、45、21中选取18、45和为63，是最大和。起初呈呈觉得很容易，可后
	来越想越感到棘手。老师提示：第i个数是否选取，可确定前i个数中的最大和。它可由前
	i-1个数中的最大和与前i-2个数中的最大和来推算。呈呈立刻开窍，难题迎刃而解！
输入：
n  （0<n<=50）
n个正整数  （正整数<=300，空格相隔）
输出：
最大和
【样例1】
输入：
5                  
13 18 28 45 21                               
 输出：
63
*/ 


#include <iostream>
#include <cmath>
#include <cstdio> 
using namespace std;

int main()
{
    int n, a[60], f[60] = {0};
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	f[0] = a[0];
	f[1] = max(a[0], a[1]);
	for(int i = 2; i < n; i++){
		if(f[i-2] + a[i] > f[i-1]){
			f[i] = f[i-2] + a[i];
		}
		else{
			f[i] = f[i-1];
		}
	}
	cout << f[n-1] << endl;
	
	return 0;
}
