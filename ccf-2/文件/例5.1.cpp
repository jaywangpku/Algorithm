#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("ab.in");
ofstream fout("ab.out");

int A, B;
int main()
{
	fin >> A >> B;
	fout << A+B;
	return 0;
}
