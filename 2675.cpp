#include <iostream>
#include <string>

using namespace std;

int main(void){
    int caseNumber,n;
    string tmp;
    cin >> caseNumber;
    for(int k = 0; k < caseNumber;k++){
        cin >> n >> tmp;
        for(int i = 0; i < tmp.length(); i++){
            for(int j = 0; j < n; j++){
                cout << tmp[i];
            }
        }
        cout << '\n';
    }
    return 0;
}