#include <iostream>

using namespace std;

int factorial(int a){
    if(a <= 1){
        return 1;
    }
    return a*factorial(a-1);
}

int main(void){
    int num;
    cin >> num;

    cout << factorial(num) << endl;

    return 0;
}