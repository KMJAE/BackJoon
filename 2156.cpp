#include <iostream>

using namespace std;

int arr[10001];
int dp[10001];

int main(void){
    int n;
    arr[0] = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = arr[1]+arr[2];
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1];
        if(dp[i] < arr[i]+arr[i-1]+dp[i-3]){dp[i]=arr[i]+arr[i-1]+dp[i-3];}
        if(dp[i] < arr[i]+dp[i-2]){dp[i] = arr[i]+dp[i-2];}
    }

    cout << dp[n] <<endl;


    return 0;
}