#include <iostream>
#include <cstring> 
using namespace std;
const int MAXN = 10010;

int main()
{
	int a[MAXN], b[MAXN], s[MAXN];
	int mark, temp = -1, n, k, x, low, high, mid = 0, rank = 0;
	cin >> n >>k;
	memset(b, 0, sizeof(b));
	for(int i = 1; i <= n; i++){
		cin >> mark;
		if(mark == temp){
			b[rank] += 1;
		}
		else{
			rank++;
			a[rank] = mark;
			b[rank] = 1;
			s[rank] = i - 1;
		}
		temp = mark;
	}
	for(int i = 1; i <= k; i++){
		cin >> x;
		low = 1;
		high = rank;
		while(low <= high && a[mid] != x){
			mid = (low+high)/2;
			if(a[mid] < x){
				high = mid - 1;
			}
			else{
				low = mid + 1;
			}
		} 
		if(a[mid] == x){
			cout << mid << " " << b[mid] << " " << s[mid] << endl;
		}
		else{
			cout << "fail" << endl;
		}
	}
	return 0;
}
