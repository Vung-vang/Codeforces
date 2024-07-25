#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    set<int> s;

    while (q--) {
        int type, x;
        cin >> type >> x;

        if (type == 1) {
            s.insert(x);
        } else if (type == 2) {
            s.erase(x);
        } else if (type == 3) {
            set<int>::iterator itr = s.find(x);
            if (itr != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
