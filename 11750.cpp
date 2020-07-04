#include <iostream>

using namespace std;
int arr[101];

int main(void){
    int size;
    int sum = 0;
    char num;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> num;
        sum += (num - '0');
    }
    cout << sum;
    return 0;
}