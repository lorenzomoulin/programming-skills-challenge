#include <iostream>

using namespace std;

string ConcatRemove(string s, string t, int k) {
    bool can = true;
    int n = s.size(), m = t.size();
    if (k >= n + m) can = true;
    else {
        // biggest common prefix between s and t
        int pref = 0;
        for (int i = 0; i < min(n, m); ++i) {
            if (s[i] == t[i]) pref++;
            else break;
        }
        int min_moves = n - pref + m - pref;
        if (k >= min_moves && (k - min_moves) % 2 == 0) can = true;
        else can = false;
    }
    return can ? "yes" : "no"; 
}

int main () {
    string s, t;
    int k;
    cin >> s >> t >> k;
    cout << ConcatRemove(s, t, k) << '\n';
    return 0;
}