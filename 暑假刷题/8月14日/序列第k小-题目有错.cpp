//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int a[100010] = {0};
//	for(int i = 0; i < n; i++){
//		cin >> a[i];
//	}
//	sort(a, a+n); 
//	int flag = a[0];
//	int t = 1;
//	for(int i = 1; i < n; i++){
//		if(a[i]!=flag){
//			t++;
//			flag = a[i]; 
//		}
//		if(k==t){
//			cout << flag << endl;
//			break;
//		}
//	}
//	return 0;
//} 



#include <bits/stdc++.h>  
using namespace std;  
    
const int MAXN = 1000005;  
    
int A[MAXN],N,k;  
    
int Kth(int l,int r,int k)  
{  
     if(l=r)return A[l];  
     int i=l,j=r,t=A[rand()%(r-l+1)+l];  
     while (i<=j)  
     {  
        while (A[i]<t)i++;  
        while (A[j]>t)j--;  
        if(i<=j)  
        {  
               swap(A[i],A[j]);  
               i++;  
               j--;  
        }  
     }  
     if (k<=j-l+1)return Kth(l,j,k);  
     else if (k<=i-l+1) return t;  
     else return Kth(i,r,k-(i-l+1));  
}  
  
int main()  
{  
    cin >> N>>k;  
    for(int i = 1;i <= N;i ++) cin >> A[i];  
    srand(int(time(0)));  
         cout<<Kth(1,N,k)<<endl;  
    return 0;  
}  
