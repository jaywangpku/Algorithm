#include <bits/stdc++.h>
using namespace std;
int u[2001], v[2001];

int main()
{
	int m,n,k,l,d,x,y,p,q,t,i,w;
	cin>>m>>n>>k>>l>>d;
	for(i=1; i<=d; i++){
		cin >> x >> y >> p >> q;
		if(x==p){
			if(y>q) v[q]++;
			else v[y]++;
		}
		if(y==q){
			if(x>p) u[p]++;
			else u[x]++;
		}
	}
	for(t=1; t<=l; t++){
		w = 0;
		for(i = 1; i <=n; i++){
			if(v[i]>v[w]){
				w = i;
			}
		}
		v[w] = -1;
	}
	for(t=1; t<=k; t++){
		w=0;
		for(i = 1; i <= m; i++){
			if(u[i] > u[w]){
				w = i;
			}
		}
		u[w] = -1;
	}
	for(i = 1; i <= m; i++){
		if(u[i]==-1){
			cout << i << " ";
		}
	}
	cout << endl;
	for(i = 1; i <= n; i++){
		if(v[i]==-1){
			cout << i << " ";
		}
	}
	return 0;
} 
