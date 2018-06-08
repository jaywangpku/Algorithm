#include <iostream>
using namespace std;

bool zs(int n){
    bool flag = true;
    for(int j = 2; j < n; j++){
        if(n % j == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    long long n, ans = 0;
    cin >> n;
    for(int i = 2; i < n; i++)
    {
        if(zs(i)){
            if(n % i == 0){
                if(i > n / i){
                    ans = i;
                }
                else{
                    ans = n / i;
                }
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
