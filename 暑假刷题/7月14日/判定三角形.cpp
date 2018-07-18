#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >>b >> c;
	if(b>a){
		swap(a, b);
	}
	if(c>a){
		swap(a, c);
	}
	if(a+b>c&&b+c>a&&a+c>b){
		if(a==b&&b==c){
			cout << "equilateral triangle" << endl;
		}
		else{
			if(b*b+c*c==a*a&&b==c){
				cout << "isosceles and right triangle" << endl;
			}
			else{
				if(b*b+c*c==a*a){
					cout << "right triangle" << endl;
				}
				else{
					if(a==b||b==c||c==a){
						cout << "isosceles triangle" << endl;
					}
					else{
						if(b*b+c*c>a*a){
							cout << "acute triangle" << endl;
						}
						if(b*b+c*c<a*a){
							cout << "obtuse triangle" << endl;
						}
					}
				}
			}
		}
	}
	else{
		cout << "no triangle" << endl;
	}
	return 0;
} 
