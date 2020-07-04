#include <iostream>

using namespace std;

bool isPrime(int a){
    int j = 1;
    int tmp = 0;
    if(a != 1){
        while(true){
            if(a % j == 0){tmp++;}
            if(a == j){break;}
            j++;
        }
    }
    if(tmp == 2){return true;}
    else{return false;}
}

int main(void){
    int tc, num;
    int a, b = 0;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        cin >> num;
        a = num / 2;
        b = num / 2;
        while(true){
            if(isPrime(a) && isPrime(b)){
                break;
            }
            else{
                a++;
                b--;
            }
        }
        cout << b <<" "<< a << endl;
    }

    return 0;
}