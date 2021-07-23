#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int, string>> pairs(N);
    int T;
    string S;
    for(int i=0; i<N; i++){
        cin >> S >> T;
        pairs[i] = make_pair(T, S);
    }
    sort(pairs.begin(), pairs.end());
    cout << pairs[N-2].second << endl;

}
