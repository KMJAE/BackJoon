#include <iostream>

using namespace std;

int main(void){
    int h, m;
    cin >> h >> m;

    if(m-45 < 0){
        if(h-1 < 0){cout << 24-1 <<" "<< m+60-45 <<endl;}
        else{cout << h-1 <<" "<< m+60-45 <<endl;}
    }
    else{
        cout << h <<" "<< m-45 << endl;
    }

    return 0;
}