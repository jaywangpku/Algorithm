#include <iostream>
using namespace std;

int main()
{
	int s = 1;
	for(int i = 2; i <= 100; i++){
		if(i % 2 == 0){
			s = s + i;
		}
		else{
			s = s - i;
		}
	}
	cout << s << endl;
	return 0;
} 
