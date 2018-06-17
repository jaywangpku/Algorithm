#include <iostream>
using namespace std;

int main()
{
	char a;
	while(cin >> a){
		if(a >= 'a'&&a <= 'z'){
			cout << char((a-'a'+3)%26+'a');
		}
		else if(a >='A'&&a <='Z'){
			cout << char((a-'A'+3)%26+'A');
		}
		else{
			cout << a;
		}
	}
	return 0;
} 
