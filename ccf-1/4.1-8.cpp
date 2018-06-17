#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
	int maxn = -10000, minn = 10000;
	double ave = 0;
	for(int i = 0; i < 10; i++){
		int temp;
		cin >> temp;
		if(maxn < temp){
			maxn = temp;
		}
		if(minn > temp){
			minn = temp;
		}
		ave += temp;
	}
	printf("%.3f", (ave-minn-maxn)/8);
	return 0;
}  
