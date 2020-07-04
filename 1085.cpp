#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(void){
    int x, y, w, h, ans;
    cin >> x >> y >> w >> h;
    int a, b;
    a = min(w-x,h-y);
    b = min(abs(0-x),abs(0-y));
    cout << min(a,b) << endl;
}