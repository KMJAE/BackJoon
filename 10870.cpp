#include <iostream>

using namespace std;


int fibo(int a){
    if(a <= 1) return a;
    else{
        return fibo(a-1) + fibo(a-2);
    }
}

int main(void){
    int num;
    cin >> num;
    cout << fibo(num) << endl;

    return 0;
}