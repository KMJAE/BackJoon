#include <iostream>

using namespace std;

long long arr[101][10];

int main(void){
    int n;
    long long sum = 0;
    cin >> n;
    for(int i = 0; i < 10; i++){
        if(i == 0){arr[1][i] = 0;}
        else{arr[1][i] = 1;}
    }
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            if(j == 0){arr[i][j] = arr[i-1][j+1] % 1000000000;}
            else if(j == 9){arr[i][j] = arr[i-1][j-1] % 1000000000;}
            else{arr[i][j] = arr[i-1][j-1]+arr[i-1][j+1] % 1000000000;}
        }
    }

    for(int k = 0; k < 10; k++){
        sum = (arr[n][k] + sum) % 1000000000;
    }

    cout << sum << endl;

    return 0;
}