#include <iostream>
using namespace std;

int main()
{
	int year, month, date, ans = 0;
	int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> year >> month >> date;
	for(int i = 1; i < month; i++){
		ans+=a[i];
	}
	ans += date;
	if(year%4==0&&year%100!=0||year%400==0){
		if(month>2){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
} 
