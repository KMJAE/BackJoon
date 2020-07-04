#include <iostream>

using namespace std;

int main(void){
    int n,x;
    cin >> n >> x;
    int arr[10001];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){
        if(arr[j] < x){cout << arr[j] << " ";}
    }
    cout << endl;
}