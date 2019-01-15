// January 14, 2019
//

/*

*/


#include <bits/stdc++.h>

using namespace std;


int N;
vector<int> a;

void run() {
    cin >> N;
    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    vector< vector<int> > dp(N + 1, vector<int>(360));
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 360; j++) {
            int x = (j - a[i - 1] + 360) % 360; // run clockwise
            int y = (j + a[i - 1]) % 360; // run counterclockwise
            dp[i][j] = dp[i - 1][x] + dp[i - 1][y];
        }
    }
    cout << dp[N][180] << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("DATA41.txt", "r", stdin);


    int TC = 10;
    while (TC--) {
        run();
    }


    return 0;
}
