#include <iostream>  
using namespace std;

long long gcd(long long m, long long n)
{
    return (n == 0) ? m : gcd(n, m % n);
}

int main()
{   
    long long a, b, c;
	cin>>a>>b;
    c = gcd(a, b); 
    b = b / c;
    if(c % b == 0)    
       cout<<"Yes"<<endl;    
    else    
       cout<<"No"<<endl;    
    return 0;    
}  
