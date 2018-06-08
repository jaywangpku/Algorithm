#include <iostream>
using namespace std;

int main()
{
	int a;
	int temp = 0, money = 0;
	double moneyall = 0, ans = 0;
	for(int i = 0; i < 12; i++)
	{
		cin >> a;
		if(300 + temp < a){
			ans = 0 - (i + 1);
			break;
		}
		else{
			money = 300 + temp - a;
			int n = money / 100;
			moneyall += n * 100;
			temp = money - n * 100;
		}
	}
	if(ans == 0){
		ans = moneyall * 1.2 + temp;	
	}
	cout << ans;
	return 0;
} 
