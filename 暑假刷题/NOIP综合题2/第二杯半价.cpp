#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	map<string,int> tea;  // 关联容器，建立key-value对 
	int cost[25] = {0};
	//输入m行奶茶名称和价格
	for(int i = 0; i < m; i++){
		string s; int p;
		cin >> s >> p;
		tea[s] = p;
	} 
	//输入n个要点的奶茶名称
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		cost[i] = tea[s];
	} 
	sort(cost, cost+n);
	double ans = 0;
	for(int i = 0; i < n/2; i++){
		ans += cost[i];
	}
	for(int i = n/2; i < n; i++){
		ans += cost[i]*0.5;
	}
	ans = ans + cost[0];
	cout << ans << endl;
	return 0;
} 
