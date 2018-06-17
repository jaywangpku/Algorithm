#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int num[11];
	int i;
	memset(num, 0, sizeof(num));
	while(cin >> i){
		num[i]++;
	}
	for(int i = 1; i <= 10; i++){
		cout << num[i] << " ";
	}
	return 0;
} 
