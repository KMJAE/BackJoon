#include <iostream>
using namespace std;
int N,M;
int arr[9] = {9,};
bool check[9] = {0,};

void dfs(int count, int temp){
    if(count == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = temp; i <= N; i++){
        if(!check[i]){
            check[i] = true;
            arr[count] = i;
            dfs(count+1, i+1);
            check[i] = false;
        }
    }

}

int main(void){

    cin >> N >> M;
    dfs(0, 1);
    return 0;
}