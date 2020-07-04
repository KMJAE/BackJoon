#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int num;
    int a;
    int j, tmp;
    int ans;
    while(true){
        cin >> num;
        if(num == 0){break;}
        ans = 0;
        a = num + 1;
        while(a > num && a <= 2 * num){
            j = 1;
            tmp = 0;
            while(true){
                if(j > sqrt(a)){break;}
                if(a % j == 0){tmp++;}
                j++;
            }
            if(tmp == 1){
                ans++;
            }
            a++;
        }
        cout << ans << '\n';
    }

    return 0;
}