#include <iostream>
#include <cmath>
#define pi 3.141593
using namespace std;

int main(void){
    double a;
    cin >> a;
    cout << fixed;
    cout.precision(6);
    cout << a*a * M_PI << endl;
    cout << 2 * a * a << endl;

    return 0;
}