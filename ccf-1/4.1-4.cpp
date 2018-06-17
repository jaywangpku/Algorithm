#include <iostream>
using namespace std;
int main()
{
	int n;
	int maxa = -100000, mina = 100000;
	cin >> n;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if(temp > maxa){
			maxa = temp;
		}
		if(temp < mina){
			mina = temp;
		}
	}
	cout << maxa - mina << endl;
	return 0;
} 
