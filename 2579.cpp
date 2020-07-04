#include <iostream>
#include <algorithm>

using namespace std;

int stair[301];
int stairState[301];

// void upStair(int k){

// }

int main(void){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> stair[i];
    }
    stairState[0] = stair[0];
    stairState[1] = max(stair[0]+stair[1], stair[1]);
    stairState[2] = max(stair[0]+stair[2], stair[1]+stair[2]);

    for(int i = 3; i < n; i++){
        stairState[i] = max(stairState[i-2] + stair[i],stairState[i-3]+ stair[i-1] + stair[i]);
    }

    cout << stairState[n-1] << endl;
    return 0;
}