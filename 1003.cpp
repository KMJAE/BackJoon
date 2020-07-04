#include <iostream>

using namespace std;
int dp[41];


int fibonacci(int n){
    if (n == 0){
        dp[0] = 0;
        return 0;
    }
    else if(n == 1){
        dp[1] = 1;
        return 1;
    }
    if(dp[n]!= 0){
        return dp[n];
    }
    else{
        return dp[n] = fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void){
    int test;
    int tmp;
    cin >> test;
    for(int i = 0; i < test; i++){
        cin >> tmp;
        if(tmp == 0){
            cout << 1 <<" "<< 0 <<endl;
        }
        else if (tmp == 1){
            cout << 0 <<" "<< 1 << endl;
        }
        else{
            fibonacci(tmp);
            cout << dp[tmp-1] << " " << dp[tmp] << endl;
        }
    }

    return 0;
}