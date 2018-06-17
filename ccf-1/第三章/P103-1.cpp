#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if(a<=0.5){
		cout << 3;
	}
	else{
		cout << 3+ceil((a-0.5)/0.2)<<endl;
	}
	return 0;
} 
