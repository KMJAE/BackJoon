#include <iostream>

using namespace std;

int main(void){
    int a, b, c, ans;

    cin >> a >> b >> c;
    if(a >= b && a >= c){
        if(b >=c){ans = b;}
        else{ans = c;}
    }
    if(b >= a && b >= c){
        if(a >=c){ans = a;}
        else{ans = c;}
    }
    if(c >= b && c >= a){
        if(a >=b){ans = a;}
        else{ans = b;}
    }

    cout << ans << endl;

    return 0;
}