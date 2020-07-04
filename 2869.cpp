#include <iostream>

using namespace std;

int main(void){
    int a,b,v;
    cin >> a >> b >> v;

    int date = (v-b-1) / (a-b) + 1;

    cout << date << endl;

}