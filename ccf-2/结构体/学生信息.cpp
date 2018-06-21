#include <bits/stdc++.h>
using namespace std;

struct student{
	string name;
	char sex;
	int age;
	double weight;
};

int main()
{
	student stu1;
	student stu = {"zhangsan", 'm', 12, 200.502};
	//cin >> stu.name >> stu.sex >> stu.age >> stu.weight;
	cout << stu.name << endl;
	cout << stu.sex << endl;
	cout << stu.age << endl;
	printf("%.1f\n", stu.weight);
	return 0;
} 
