#include <iostream>

using namespace std;

void hanoi(int k, int a, int b, int c){
    if(k == 1) cout << a << " " <<  c << endl;
    else{
        hanoi(k-1, a, c, b);
        cout << a << " " << c << endl;
        hanoi(k-1, b, a ,c);
    }
}

int main(void){
    int k;
    cin >> k;
    int ans = 2;
    for(int i = 1; i < k; i++){
        ans *= 2;
    }

    cout <<  ans -1 << endl;
    hanoi(k,1,2,3);

    return 0;
}