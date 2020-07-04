#include <iostream>

using namespace std;

int dp[1000001];

int bin(int n){
    if(n == 0){
        dp[0] = 0;
        return 0;
    }
    else if(n == 1){
        dp[1] = 1;
        return 1;
    }
    else if(n == 2){
        dp[2] = 2;
        return 2;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    else{
        return dp[n] = bin(n-1) + bin(n-2);
    }
}

int main(void){
    int n;
    cin >> n;
    bin(n);
    cout << dp[n] % 15746<< endl;

    return 0;
}