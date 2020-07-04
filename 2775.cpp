#include <iostream>

using namespace std;

int arr[15][15];
int sum;

void fun(){
    for(int i = 0; i < 15; i++){
        arr[0][i] = i;
    }
    for(int i = 1; i < 15; i++){
        sum = 0;
        for(int j = 1; j < 15; j++){
            arr[i][j] = sum+arr[i-1][j];
            sum += arr[i-1][j];
        }
    }
}

int main(void){
    int tmp, k, n;
    cin >> tmp;
    fun();
    for(int i = 0; i < tmp; i++){
        cin >> k;
        cin >> n;
        cout << arr[k][n] <<endl;
    }
}