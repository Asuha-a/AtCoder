#include<iostream>
#include<set>
using namespace std;

int main() {
    int N; cin >> N;
    set<string> st;
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        st.insert(s);
    }
    cout << st.size() << endl;
}
