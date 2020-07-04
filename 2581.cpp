#include <iostream>

using namespace std;

int main(void){
    int up, down; //수 범위
    int sum = 0; //합
    int arr[10001]; //최솟값 넣을 배열
    int k = 0;
    int j, tmp; //나누는 수와 쓰레기 변수
    cin >> up;
    cin >> down;
    for(int i = up; i <= down; i++){
        j = 1;
        tmp = 0;
        if(i != 1){
            while(true){
                if(i % j == 0){tmp++;}
                if(i == j){break;}
                j++;
            }
            if(tmp == 2){
                arr[k] = i;
                sum += i;
                k++;
            }
        }
    }
    if(sum == 0){
        cout << -1 << endl;
    }
    else{
        cout << sum << endl;
        cout << arr[0] << endl;
    }
    return 0;
}