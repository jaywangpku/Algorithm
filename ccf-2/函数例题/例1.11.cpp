#include <iostream>
#include <cmath>
using namespace std;
int ans;
void fenjie(int remain, int pre)
{
	if(remain==1){
		ans++;
		return;
	}
	int m = int(sqrt(remain));
	for(int i = pre; i <= m; i++){
		if(remain%i==0){
			fenjie(remain/i, i);
		}
	}
	fenjie(1, remain);
} 
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int a;
		cin >> a;
		ans = 0;
		fenjie(a, 2);
		cout << ans << endl;
	}
	return 0;
}
