#include<iostream>
using namespace std;

int main() {
    int N; cin >> N;
    int ans = 0;
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++) {
            if (i * j < N) {
                ans++;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
}
