#include <iostream>

using namespace std;

int n;
int ans = 0;
int arr[15];

bool promising(int k){
    for(int i = 0; i < k; i++){
        if(arr[k] == arr[i] || abs(arr[k] - arr[i]) == k-i) {return false;}
    }
    return true;
}

void n_queen(int a){
    if(n == a){
        ans++;
    }
    else{
        for(int i = 0; i < n; i++){
            arr[a] = i;
            if(promising(a)){n_queen(a+1);}
        }
    }
}

int main(void){
    cin >> n;

    return 0;
}