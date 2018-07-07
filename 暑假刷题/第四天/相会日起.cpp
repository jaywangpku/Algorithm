/*
康康、聪聪和欢欢三个同学都定期去“爱心”福利院做义工，康康每a天去一次、聪聪每b天去一次、欢欢每c天去一次。2014年5月1日他们同聚“爱心”福利院，过了一个非常有意义的“五一”劳动节。问：下一次他们再相聚“爱心”福利院，将是哪年几月几日？
【输入】a  b  c  （0<a<100,0<b<100,0<c<100 ）
【输出】再相聚的年、月、日  （以1个空格相隔）
【样例】输入：1  2  3
输出：2014  5  7 
*/ 

#include <iostream>
#include <cmath>
#include <cstdio> 
using namespace std;

int getMax(int a, int b, int c)
{
	int ans = a;
	if(ans < b)
		ans = b;
	if(ans < c)
		ans = c;
	return ans;
}

int main()
{
    int a, b, c, t, maxn;
    int i = 1;
    int m1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> a >> b >> c;
    maxn = getMax(a, b, c);
    while(true){
    	t = maxn * i;
    	if(t%a==0&&t%b==0&&t%c==0)
    		break;
    	i++;
    }
    int y = 2014, m = 5, d = 1;
    while(t >= 366)
    {
    	y++;
    	if((y%4==0&&y%100!=0)||(y%400==0)){
			t = t - 366; 
		}
		else{
			t = t - 365;
		}
    }
    if(t == 365){
    	t = t - 365;
    	y++;
    }
    
    if(((y+1)%4==0&&(y+1)%100!=0)||((y+1)%400==0)){
    	while(t > m2[m] - 1){
	    	t = t - m2[m];
	    	if(m==12)
	    		m = 1;
	    	else
	    		m = m + 1;
	    }
	    d = d + t;
	}
    else{
    	while(t > m1[m] - 1){
	    	t = t - m1[m];
	    	if(m==12)
	    		m = 1;
	    	else
	    		m = m + 1;
	    }
	    d = d + t;
    }
    if(m < 5){
    	y++;
    }
    cout << y << " " << m << " " << d << endl;
	return 0;
}
