#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sum.in");
ofstream fout("sum.out");
int main()
{
	int x,sum=0;
	while(fin >> x){
		sum += x;
	}
	fout << sum << endl;
	return 0;
}
