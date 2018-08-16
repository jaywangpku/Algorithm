#include<bits/stdc++.h>  
using namespace std;  
int n,a[2001];  
  
void InsertValue(int pos,int value)  
{  
    for(int i=n;i>=pos;i--)a[i+1]=a[i];  
    a[pos]=value;  
    n++;  
}  
  
void DeleteValue(int pos)  
{  
    for(int i=pos+1;i<=n;i++)a[i-1]=a[i];  
    n--;  
}  
  
int main()  
{  
    int m, type,pos,value;  
    cin>>n;  
    for(int i=1;i<=n;i++)cin>>a[i];  
    cin>>m;  
    for(int i=1;i<=m;i++)   
    {  
  
        cin>>type>>pos;  
        if (type==1)cout<<a[pos]<<endl;  
        if (type==2)  
        {  
            cin>>value;  
            InsertValue(pos,value);  
        };  
        if (type==3) DeleteValue(pos);  
    }  
    return 0;  
}
