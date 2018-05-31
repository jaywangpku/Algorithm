#include <iostream>
using namespace std;

int main()
{
	double s = 1;
	for(int i = 2; i <= 100; i++){
		if(i % 2 == 0){
			s = s - 1.0 / i;
		}
		else{
			s = s + 1.0 / i;
		}
	}
	cout << s << endl;
	return 0;
} 
