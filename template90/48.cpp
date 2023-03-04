#include <bits/stdc++.h>
using namespace std;

int N, K;
long A[200000];
long B[200000];
long C[400000];

int main(){
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        C[2 * i] = B[i];
        C[2 * i + 1] = A[i] - B[i];
        // cout << C[2 * i] << C[2 * i + 1] << endl;
    }
    sort(C, C + 2 * N, greater<>());
    long res = 0;
    for(int i = 0; i < K; i++){
        res += C[i];
    }
    cout << res << endl;
    return 0;

}