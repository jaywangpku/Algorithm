#include <iostream>
#include <cstdio>
#include <fstream>
#include <iomanip>
using namespace std;

ifstream fin("data.in");
ofstream fout("data.out");
int main()
{
	int a[1001] = {0};
	int temp, i = 0;
	int maxa, mina;
	double avg;
	while(fin >> temp){
		a[i] = temp;
		i++;
	}
	maxa = a[0];
	mina = a[0];
	avg = 0;
	for(int j = 1; j < i; j++){
		if(maxa < a[j]){
			maxa = a[j];
		}
		if(mina > a[j]){
			mina = a[j];
		}
		avg = avg + a[j];
	}
	fout << maxa << endl;
	fout << mina << endl;
	//printf("%.3f\n", avg/i);
	fout << setiosflags(ios::fixed) << setprecision(3) << avg/i << endl;
	return 0;
} 
