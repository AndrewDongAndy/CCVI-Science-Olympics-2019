// January 14, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


void run() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < (1 << N); i++) {
        int p = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) {
                p += a[j];
            }
            else {
                p += 360 - a[j];
            }
            p %= 360;
        }
        if (p == 180) {
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("DATA41.txt", "r", stdin);


    int TC = 7;
    while (TC--) {
        run();
    }


    return 0;
}
