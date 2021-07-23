#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> a(2, vector<int>(N+1, 0));

    for(int i=0; i<N; i++){
        int c, p;
        cin >> c;
        cin >> a[c-1][i+1] ;
    }

    for(int i=1; i<N+1; i++){
        for(int j=0; j<2; j++){
            a[j][i] += a[j][i-1];
        }
    }

    int Q;
    cin >> Q;

    for(int i=0; i<Q; i++){
        int L, R;
        cin >> L >> R;
        for(int j=0; j<2; j++){
            cout << a[j][R] - a[j][L-1] ;
            if(j!=1){
                cout << " ";
            }
        }
        cout << endl;
    }
}