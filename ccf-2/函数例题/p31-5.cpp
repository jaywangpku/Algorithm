#include <bits/stdc++.h>
using namespace std;

void power(long long num){
	long long t, i;
	if(num==1){
		cout << "2(0)";
	}
	else if(num==2){
		cout << "2";
	}
	else{
		t = 1;
		for(i = 1; ; i++){
			t*=2;
			if(t>num){
				t/=2;
				cout << "2";
				i--;
				if(i!=1){
					cout << "(";
					power(i);
					cout << ")";
				}
				cout << "+";
				power(num-t);
				return;
			}
			if(t==num){
				cout << "2(";
				if(i!=1){
					power(i);
				}
				cout << ")";
				return;
			}
		}
	}
}
int main()
{
	long long i;
	cin >> i;
	power(i);
	return 0;
}
 
