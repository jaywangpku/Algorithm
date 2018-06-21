#include <bits/stdc++.h>
using namespace std;

struct student{
	string name;
	int yuwen;
	int shuxue;
	int zongfen;
};
student stu[1001];

int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> stu[i].name >> stu[i].yuwen >> stu[i].shuxue;
		stu[i].zongfen = stu[i].yuwen + stu[i].shuxue;
	}
	for(int i = 0; i < n; i++){
		if(stu[i].yuwen >= 60 && stu[i].shuxue >= 60){
			cout << stu[i].name << " " << stu[i].zongfen << endl;
		}
	}
	return 0;
}
