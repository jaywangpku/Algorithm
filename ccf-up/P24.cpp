/*
P24  有N本书排列成一行，已知第i本的厚度为 Ai。把它们分成连续的M组，使T最小化，其中T表示厚度之和最大的一组的厚度 
*/

#include <iostream>
#include <cmath>

using namespace std;
const int N = 10;
const int sum_of_ai = 55;

int a[N] = {1,2,3,4,5,6,7,8,9,10};
int m = 3;

bool valid(int size)
{
	int group = 1;
	int rest = size;
	for(int i = 0; i < N; i++)
	{
		if(rest >= a[i])
			rest -= a[i];
		else
		{
			group++;
			rest = size - a[i];
		}	
	}
	return group <= m;
} 

int main()
{
	int l = 0;
	int r = sum_of_ai;
	while(l < r)
	{
		int mid = (l + r) / 2;
		if(valid(mid))
		{
			r = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout << l << endl;
	return 0;
} 
