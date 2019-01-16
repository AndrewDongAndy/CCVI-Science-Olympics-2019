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
    vector< vector<long long> > dp(N + 1, vector<long long>(360)); // int is large enough
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
