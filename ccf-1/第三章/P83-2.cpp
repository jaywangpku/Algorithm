#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if(a+b>c&&b+c>a&&a+c>b){
		if(a==b&&b==c){
			cout <<"dengbian";
		}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			cout << "zhijiao";
		}
		else{
			cout << "yiban";
		}
	}
	else{
		cout << "no";
	}
	return 0;
} 
