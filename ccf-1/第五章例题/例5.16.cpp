#include <iostream>
using namespace std;

int main()
{
	int a[11] = {5, 13, 19, 21, 37, 56, 64, 75, 80, 88, 92}, x = 21;
	int low = 0, high = 10;
	int mid = (low+high)/2;
	while(low <= high){
		mid = (low+high)/2;
		if(a[mid] == x){
			break;
		}
		if(a[mid] < x){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	if(a[mid] == x){
		cout << mid << endl;
	}
	else{
		cout << "fail" << endl;
	}
	return 0;
} 
