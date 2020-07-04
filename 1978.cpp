#include <iostream>

using namespace std;

int main(void){
    int n,k,j;
    cin >> n;
    int tmp, ans = 0;
    for(int i = 0; i < n; i++){
        j = 1;
        tmp = 0;
        cin >> k;
        if(k != 1){
            while(true){
                if(k % j == 0){tmp++;}
                if(k == j){break;}
                j++;
            }
            if(tmp == 2){ans++;}
        }
    }

    cout <<ans<< endl;
    return 0;
}