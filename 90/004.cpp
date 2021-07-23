#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H+1, vector<int>(W+1));
    for (int i = 0; i < H; i++){
        int tmp  =0;
        for(int j = 0; j < W; j++){
            cin >> A[i][j];
            tmp += A[i][j];
        }
        A[i][W] = tmp;
    }

    for (int i = 0; i < W; i++){
        int tmp  =0;
        for(int j = 0; j < H; j++){
            tmp += A[j][i];
        }
        A[H][i] = tmp;
    }


    for (int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << A[i][W] + A[H][j] - A[i][j] ;
            if(j!=W-1){
                cout << " ";
            }
        }
        cout << endl;
    }
}
