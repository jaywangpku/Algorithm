#include <bits/stdc++.h>  
using namespace std;  
  
int main()  
{  
    char s[15];  
    int ans = 0;  
    cin >> s;  
    for(int i = 0, j = 1; i < 12; i++){ // 按计算规则计算结果 
        if(s[i]>='0'&&s[i]<='9'){  
            ans += j*(s[i]-'0');  
            j++;  
        }  
    }  
    ans = ans % 11;  
    char k = s[12];
    if(k=='X'&&ans==10){    // 针对不同的情况输出 
        cout << "Right";  
    }  
    else if(ans == k-'0'){  
        cout << "Right";  
    }  
    else{  
        for(int i = 0; i < 12; i++){  
            cout << s[i];  
        }  
        if(ans == 10){  
            cout << 'X';  
        }  
        else{  
            cout << ans;  
        }  
    }  
    return 0;  
}  







