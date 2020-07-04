#include <iostream>

using namespace std;
long long dp[101];

void tri(int k){
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;

    for(int i = 5; i <= k; i++){
        dp[i] = dp[i-2] + dp[i-3];
    }
    cout << dp[k-1] << endl;
}

int main(void){
    int n, tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        tri(tmp);
    }


    return 0;
}