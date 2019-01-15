#include <bits/stdc++.h>
using namespace std;

#define MAXD 360

int dp[31][MAXD];

int main() {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  freopen("DATA41.txt", "r", stdin);

  int T = 10;
  while (T--) {
    memset(dp, 0, sizeof dp);
    int N; cin >> N;
    vector<int> deg(N);
    for (int i = 0; i < N; i++) {
      cin >> deg[i];
    }
    dp[0][0] = 1;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
      for (int j = 0; j < 360; j++) {
        dp[i][(j+deg[i-1])%360] += dp[i-1][j];
        if (j - deg[i-1] < 0) {
          dp[i][360+j-deg[i-1]] += dp[i-1][j];
        } else {
          dp[i][(j-deg[i-1])] += dp[i-1][j];
        }
      }
    }
    cout << dp[N][180] << "\n";
  }
}
