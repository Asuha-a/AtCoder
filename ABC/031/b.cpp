#include<iostream>
using namespace std;

int main() {
    int L, H; cin >> L >> H;
    int N; cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if (A[i] < L) {
            cout << L - A[i] << endl;
        } else if (A[i] > H) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
