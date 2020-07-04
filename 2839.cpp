#include <iostream>

using namespace std;

int main(void){
    int n;
    int ans = 0;
    cin >> n;

    while(n > 0){
        if(n % 5 == 0){n -= 5;}
        else if(n % 3 == 0){n -= 3;}
        else{n -= 5;}
        ans++;
    }
    if(n >= 0){cout << ans << endl;}
    else {cout << -1 << endl;}
    return 0;
}