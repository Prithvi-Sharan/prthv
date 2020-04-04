#include <bits/stdc++.h>
using namespace std;
int mat[60][60], n, k, t;
bool r_s[60][60], c_s[60][60], found;

void finder(int r, int c, int m) {
    if (r == n && c == n + 1 && m == k && !found) {
        found = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    } else if (r > n) {
        return;
    } else if (c > n) {
        finder(r + 1, 1, m);
    }
    for (int i = 1; i <= n && !found; ++i) {
        if (!r_s[r][i] && !c_s[c][i]) {
            r_s[r][i] = c_s[c][i] = true;
            if (r == c) {
                m += i;
            }
            mat[r][c] = i;

            finder(r, c + 1, m);

            r_s[r][i] = c_s[c][i] = false;
            if (r == c) {
                m -= i;
            }
            mat[r][c] = 0;
        }
    }
}

int main() {
    int T;
    scanf(" %d", &T);
    for (t = 1; t <= T; ++t) {
        scanf(" %d %d", &n, &k);
        finder(1, 1, 0);
        if (!found) {
            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        }
        found = false;
    }
    return 0;
}