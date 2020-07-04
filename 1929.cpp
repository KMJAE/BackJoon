#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int up, down; //아래,위 범위값
    int j, tmp;
    int k = 0;
    int arr[1000001];
    cin >> up >> down;
    for(int i = up; i <= down; i++){
        j = 1;
        tmp = 0;
        if(i != 1){
            while(true){
                if(j > sqrt(i)){break;}
                if(i % j == 0){tmp++;}
                j++;
            }
            if(tmp == 1){
                arr[k] = i;
                k++;
            }
        }
    }
    for(int i = 0 ;i < k;i++){
        cout << arr[i] << '\n';
    }
}