#include <iostream>  
using namespace std;  
  
int main()  
{  
    int n, m;  
    int a[100001] = {0};  
    cin >> n;  
    for(int i = 0; i < n; i++){  
        cin >> a[i];  
    }
    for(int i = n-1; i > 0; i--){  
        for(int j = 0; j < i; j++){  
            if(a[j] < a[j+1]){  
                swap(a[j], a[j+1]);  
            }  
        }  
    }  
    cin >> m;  
    while(m--){  
        int k, t = 0;  
        bool flag = false;  
        cin >> k;  
        for(t = 0; t < n; t++){  
            if(k == a[t]){  
                flag = true;  
                break;  
            }  
        }  
        if(flag){  
            cout << t+1 << " ";   
        }  
        else{  
            cout << -1 << " ";  
        }  
    }  
    return 0;  
}  
