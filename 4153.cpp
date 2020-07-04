#include <iostream>

using namespace std;

int main(void){
    int x,y,z;
    while(true){
        cin >> x >> y >> z;
        if(x == 0 && y == 0 && z == 0){break;}
        if(x*x + y*y == z*z || z*z + y*y == x*x || x*x + z*z == y*y){
            cout << "right" << endl;
        }
        else{cout << "wrong" << endl;}
    }
    return 0;
}